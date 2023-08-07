import spinal.core._
import spinal.core.sim._
import spinal.lib._

// 只验证了默认参数的正确性
class TPUSimEnv(period:Int) extends Component {

  val io = new Bundle{
    val tpu_start = in Bool()
    val tpu_done = out Bool()
  }

  import MatrixOperation._
  import myUtil.PrintDump._
  val tpuconfig = new TPUConfig()

  // 生成矩阵
  val matrixLeftSet, matrixRightSet = Array.fill(3)(generateRandomMatrix(tpuconfig.inputDataWidth, tpuconfig.arraySize))

  println("matLeft:")
  matrixLeftSet.foreach(printMatrix(_))
  matrixLeftSet.foreach(dumpMatrix2File(_, "matrixLeftSet"))
  println("matRight:")
  matrixRightSet.foreach(printMatrix(_))
  matrixRightSet.foreach(dumpMatrix2File(_, "matrixRightSet"))

  // 参考结果
  val refResult = matrixLeftSet.zip(matrixRightSet).map { element =>
    multiply(element._1, element._2)
  }

  // 输入sram
  val transposedMatrixLeftSet = matrixLeftSet.map(_.transpose)// sramD的输入需要转置一下
  val sramDInput = generateSRAMInput(transposedMatrixLeftSet(0), transposedMatrixLeftSet(1), transposedMatrixLeftSet(2))
  val sramWInput = generateSRAMInput(matrixRightSet(0), matrixRightSet(1), matrixRightSet(2))

  println("sramD:")
  printMatrix(sramDInput)
  dumpMatrix2File(sramDInput, "sramD")

  println("sramW:")
  printMatrix(sramWInput)
  dumpMatrix2File(sramWInput, "sramW")

  // 模块例化
  val tpu = new TPU(
    SRAM_DATA_WIDTH = tpuconfig.inputDataWidth * tpuconfig.peSize,
    ARRAY_SIZE = tpuconfig.arraySize,
    DATA_WIDTH = tpuconfig.inputDataWidth,
    OUTPUT_DATA_WIDTH = tpuconfig.outputDataWidth
  )

  val sramDDepth = 32
  val sramDDataNumPerLine = tpuconfig.arraySize / 2
  val sramD0 = SRAMReadOnly(sramDInput.map{x => x.slice(0,tpuconfig.peSize)})
  val sramD1 = SRAMReadOnly(sramDInput.map{x => x.slice(tpuconfig.peSize,tpuconfig.arraySize)})
  val sramW0 = SRAMReadOnly(sramWInput.map{x => x.slice(0,tpuconfig.peSize)})
  val sramW1 = SRAMReadOnly(sramWInput.map{x => x.slice(tpuconfig.peSize,tpuconfig.arraySize)})

  val sramRes0, sramRes1, sramRes2 = new SRAMWriteOnly(tpuconfig.outputDataWidth, tpuconfig.arraySize, tpuconfig.sramResDepth)

  // 端口连接
  val tpuio = tpu.io

  tpuio.tpu_start <> io.tpu_start
  tpuio.tpu_done <> io.tpu_done

  tpuio.sram_raddr_w0.resized <> sramW0.io.addr
  tpuio.sram_rdata_w0 <> sramW0.io.rdata

  tpuio.sram_raddr_w1.resized <> sramW1.io.addr
  tpuio.sram_rdata_w1 <> sramW1.io.rdata

  tpuio.sram_raddr_d0.resized <> sramD0.io.addr
  tpuio.sram_rdata_d0 <> sramD0.io.rdata

  tpuio.sram_raddr_d1.resized <> sramD1.io.addr
  tpuio.sram_rdata_d1 <> sramD1.io.rdata

  tpuio.sram_write_enable_a <> sramRes0.io.valid
  tpuio.sram_waddr_a.resized <> sramRes0.io.addr
  tpuio.sram_wdata_a <> sramRes0.io.wdata

  tpuio.sram_write_enable_b <> sramRes1.io.valid
  tpuio.sram_waddr_b.resized <> sramRes1.io.addr
  tpuio.sram_wdata_b <> sramRes1.io.wdata

  tpuio.sram_write_enable_c <> sramRes2.io.valid
  tpuio.sram_waddr_c.resized <> sramRes2.io.addr
  tpuio.sram_wdata_c <> sramRes2.io.wdata



  // 结果sram转换后数据
//  val transRes0 = transformResultMatrix(sramRes0)

  def init() = {
    clockDomain.forkStimulus(period)
    SimTimeout(100 * period) // 超时限制
    io.tpu_start #= false
    clockDomain.waitSampling(2 )
    io.tpu_start #= true
  }


  def simDone() = {
    while(io.tpu_done.toBoolean == false){
      clockDomain.waitSampling()
    }

    List(sramRes0, sramRes1, sramRes2).zipWithIndex.foreach{ case(x,idx) =>
      dumpMatrix2File(x.getMemInt(),s"sramRes${idx}_int")
      dumpMatrix2File(x.getMemBin(),s"sramRes${idx}_bin")

      dumpMatrix2File(transformResultMatrix(x.getMemInt()),s"result${idx}")
    }

    printMatrix(refResult(0))
    printMatrix(refResult(1))
    printMatrix(refResult(2))
  }


}

object TPUSim extends App{
//  Config.spinal.generateVerilog(new TPUSimEnv(10))
  Config.sim.compile(new TPUSimEnv(10)).doSim{ dut =>
    dut.init()
    dut.simDone()
  }
}
