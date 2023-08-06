import spinal.core._
import spinal.core.sim._
import spinal.lib._

// 只验证了默认参数的正确性
class TPUSimEnv(
                 period:Int,
                 sramDataWidth:Int = 32,
                 arraySize:Int = 8,
                 dataWidth:Int = 8,
                 outputDataWidth:Int = 16
               ) extends Component {
  val io = new Bundle{
    val tpu_start = in Bool()
    val tpu_done = out Bool()
  }
  // 模块例化
  val tpu = new TPU(
    SRAM_DATA_WIDTH = sramDataWidth,
    ARRAY_SIZE = arraySize,
    DATA_WIDTH = dataWidth,
    OUTPUT_DATA_WIDTH = outputDataWidth
  )

  // TODO: 深度可能需要减1
  val sramW0, sramW1, sramD0, sramD1 = new SRAMReadOnly(width = sramDataWidth, depth = 128)
  val sramRes0, sramRes1, sramRes2 = new SRAMWriteOnly(width = 128, depth = 16)

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

  import MatrixOperation._
  // 生成矩阵
  val matrixLeftSet, matrixRightSet = Array.fill(3)(generateRandomMatrix(dataWidth, arraySize))

  // 参考结果
  val refResult = matrixLeftSet.zip(matrixRightSet).map { element =>
    multiply(element._1, element._2)
  }

  // 输入sram
  val sramDInput = generateSRAMInput(matrixLeftSet(0), matrixLeftSet(1), matrixLeftSet(2))
  val sramWInput = generateSRAMInput(matrixRightSet(0), matrixRightSet(1), matrixRightSet(2))

  println("matLeft:")
  matrixLeftSet.foreach(printMat(_))
  matrixLeftSet.foreach(dumpMat2File(_,"matrixLeftSet"))
  println("sramD:")
  printMat(sramDInput)
  dumpMat2File(sramDInput,"sramD")
  println("matRight:")
  matrixRightSet.foreach(printMat(_))
  matrixRightSet.foreach(dumpMat2File(_,"matrixRightSet"))
  println("sramW:")
  printMat(sramWInput)

  // 结果sram
  val sramResDepth = arraySize * 2 - 1
  initSram()
//  val sramRes0 = Array.fill(sramResDepth)(Array.fill(arraySize)(0))

  // 结果sram转换后数据
//  val transRes0 = transformResultMatrix(sramRes0)

  def init() = {
    clockDomain.forkStimulus(period)
    SimTimeout(1000 * period) // 超时限制
    io.tpu_start #= false
    clockDomain.waitSampling(2 * period)
    println("------------")
    // 加载sramW和sramD
//    initSram()
    clockDomain.waitSampling()
  }

  def initSram() = {
    val sramWidth = dataWidth * arraySize
    for(i <- 0 until sramDInput.length){
      val data = sramDInput(i).map(B(_, dataWidth bits)).reduce(_ ## _)
      setBigInt(sramD0.mem,i,data(0 until sramWidth).toBigInt)
      setBigInt(sramD1.mem,i,data(sramWidth until 2 * sramWidth).toBigInt)
      val weight = sramWInput(i).map(B(_, dataWidth bits)).reduce(_ ## _)

      setBigInt(sramW0.mem,i,weight(0 until sramWidth).toBigInt)
      setBigInt(sramW1.mem,i,weight(sramWidth until 2 * sramWidth).toBigInt)
      println(data.toBigInt) // TODO：测试结束删除
    }
  }

  def simDone() = {
    while(!tpuio.tpu_done.toBoolean){
      clockDomain.waitSampling(period)
    }
  }


}

object TPUSim extends App{
//  Config.spinal.generateVerilog(new TPUSimEnv(10))
  Config.sim.compile(new TPUSimEnv(10)).doSim { dut =>
    dut.init()
    dut.simDone()
  }
}
