import spinal.core._

class TPU(
           ARRAY_SIZE: Int = 8,
           SRAM_DATA_WIDTH: Int = 32,
           DATA_WIDTH: Int = 8,
           OUTPUT_DATA_WIDTH: Int = 16
         ) extends Component {
  val io = new Bundle {
    val tpu_start = in Bool()

    // Input data for (data, weight) from eight SRAM
    val sram_rdata_w0 = in Bits (SRAM_DATA_WIDTH bits)
    val sram_rdata_w1 = in Bits (SRAM_DATA_WIDTH bits)
    val sram_rdata_d0 = in Bits (SRAM_DATA_WIDTH bits)
    val sram_rdata_d1 = in Bits (SRAM_DATA_WIDTH bits)

    // Output addr for (data, weight) from eight SRAM
    val sram_raddr_w0 = out UInt (10 bits)
    val sram_raddr_w1 = out UInt (10 bits)
    val sram_raddr_d0 = out UInt (10 bits)
    val sram_raddr_d1 = out UInt (10 bits)

    // Write to three SRAN for comparison
    val sram_write_enable_a = out Bool()
    val sram_wdata_a = out Bits (ARRAY_SIZE * OUTPUT_DATA_WIDTH bits)
    val sram_waddr_a = out UInt (6 bits)

    val sram_write_enable_b = out Bool()
    val sram_wdata_b = out Bits (ARRAY_SIZE * OUTPUT_DATA_WIDTH bits)
    val sram_waddr_b = out UInt (6 bits)

    val sram_write_enable_c = out Bool()
    val sram_wdata_c = out Bits (ARRAY_SIZE * OUTPUT_DATA_WIDTH bits)
    val sram_waddr_c = out UInt (6 bits)

    val tpu_done = out Bool()
  }

  val tpuVerilog = new TPUVerilog(
    ARRAY_SIZE,
    SRAM_DATA_WIDTH,
    DATA_WIDTH,
    OUTPUT_DATA_WIDTH
  )

  io.tpu_start <> tpuVerilog.io.tpu_start
  io.sram_rdata_w0 <> tpuVerilog.io.sram_rdata_w0
  io.sram_rdata_w1 <> tpuVerilog.io.sram_rdata_w1
  io.sram_rdata_d0 <> tpuVerilog.io.sram_rdata_d0
  io.sram_rdata_d1 <> tpuVerilog.io.sram_rdata_d1
  io.sram_raddr_w0 <> tpuVerilog.io.sram_raddr_w0
  io.sram_raddr_w1 <> tpuVerilog.io.sram_raddr_w1
  io.sram_raddr_d0 <> tpuVerilog.io.sram_raddr_d0
  io.sram_raddr_d1 <> tpuVerilog.io.sram_raddr_d1
  io.sram_write_enable_a <> !tpuVerilog.io.sram_write_enable_a0 // 原项目写信号低电平有效
  io.sram_wdata_a <> tpuVerilog.io.sram_wdata_a
  io.sram_waddr_a <> tpuVerilog.io.sram_waddr_a
  io.sram_write_enable_b <> !tpuVerilog.io.sram_write_enable_b0
  io.sram_wdata_b <> tpuVerilog.io.sram_wdata_b
  io.sram_waddr_b <> tpuVerilog.io.sram_waddr_b
  io.sram_write_enable_c <> !tpuVerilog.io.sram_write_enable_c0
  io.sram_wdata_c <> tpuVerilog.io.sram_wdata_c
  io.sram_waddr_c <> tpuVerilog.io.sram_waddr_c
  io.tpu_done <> tpuVerilog.io.tpu_done

}

class TPUVerilog(
                  ARRAY_SIZE: Int = 8,
                  SRAM_DATA_WIDTH: Int = 32,
                  DATA_WIDTH: Int = 8,
                  OUTPUT_DATA_WIDTH: Int = 16
                ) extends BlackBox {

  // 将模块名重命名为verilog模块的名字
  setDefinitionName("tpu_top")

  // verilog模块的参数，要求命名一致
  val generic = new Generic {
    val ARRAY_SIZE = TPUVerilog.this.ARRAY_SIZE
    val SRAM_DATA_WIDTH = TPUVerilog.this.SRAM_DATA_WIDTH
    val DATA_WIDTH = TPUVerilog.this.DATA_WIDTH
    val OUTPUT_DATA_WIDTH = TPUVerilog.this.OUTPUT_DATA_WIDTH
  }

  val io = new Bundle {
    val clk = in Bool()
    val srstn = in Bool()
    val tpu_start = in Bool()

    // Input data for (data, weight) from eight SRAM
    val sram_rdata_w0 = in Bits (SRAM_DATA_WIDTH bits)
    val sram_rdata_w1 = in Bits (SRAM_DATA_WIDTH bits)
    val sram_rdata_d0 = in Bits (SRAM_DATA_WIDTH bits)
    val sram_rdata_d1 = in Bits (SRAM_DATA_WIDTH bits)

    // Output addr for (data, weight) from eight SRAM
    val sram_raddr_w0 = out UInt (10 bits)
    val sram_raddr_w1 = out UInt (10 bits)
    val sram_raddr_d0 = out UInt (10 bits)
    val sram_raddr_d1 = out UInt (10 bits)

    // Write to three SRAN for comparison
    val sram_write_enable_a0 = out Bool()
    val sram_wdata_a = out Bits (ARRAY_SIZE * OUTPUT_DATA_WIDTH bits)
    val sram_waddr_a = out UInt (6 bits)

    val sram_write_enable_b0 = out Bool()
    val sram_wdata_b = out Bits (ARRAY_SIZE * OUTPUT_DATA_WIDTH bits)
    val sram_waddr_b = out UInt (6 bits)

    val sram_write_enable_c0 = out Bool()
    val sram_wdata_c = out Bits (ARRAY_SIZE * OUTPUT_DATA_WIDTH bits)
    val sram_waddr_c = out UInt (6 bits)

    val tpu_done = out Bool()
  }

  // 映射时钟和复位信号，注意复位有效电平不能少
  mapClockDomain(
    clock = io.clk,
    reset = io.srstn,
    resetActiveLevel = LOW
  )

  // 去除io前缀
  noIoPrefix()

  // 添加verilog文件，要添加所有依赖的verilog文件
  val verilogSrcDir = "./src/verilog/"
  val fileNameArray = Array(
    "addr_sel.v",
    "quantize.v",
    "systolic.v",
    "systolic_controll.v",
    "tpu_top.v",
    "write_out.v"
  )
  fileNameArray.foreach { fileName =>
    addRTLPath(verilogSrcDir + fileName)
  }
}

object TPU extends App {
  Config.spinal.generateVerilog(new TPU())
}