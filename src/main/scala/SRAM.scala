import spinal.core._
import spinal.core.sim._
import spinal.lib._

case class SRAMData(dataWidth:Int, num:Int) extends Bundle{
  val data = Vec.fill(num)(SInt(dataWidth bits))

  def initValue(arr:Array[Int]): this.type = {
    data.zipWithIndex.foreach{case (x, idx) => x := arr(idx)}
    this
  }
}

class SRAM(width:Int, depth:Int, initData:Array[BigInt]) extends Component{
  // 同步读写
  val io = new Bundle{
    val valid = in Bool()
    val wr = in Bool()
    val addr = in UInt(log2Up(depth) bits)
    val wdata = in UInt(width bits)
    val rdata = out UInt(width bits)
  }

  // 初始化为0，可后门读写
  val mem = new Mem(UInt(width bits),wordCount = depth).initBigInt(initData).simPublic()

  mem.write(
    enable = io.valid && io.wr,
    address = io.addr,
    data = io.wdata
  )
  io.rdata := mem.readSync(
    enable = io.valid && !io.wr,
    address = io.addr
  )

  // TODO:待测试
  def printSRAM = {
    println(mem.toStringMultiLine())
  }
}

class SRAMReadOnly(width:Int, depth:Int, initData:Array[BigInt]) extends Component{
  // 同步读
  val io = new Bundle{
    val addr = in UInt(log2Up(depth) bits)
    val rdata = out Bits(width bits)
  }

  // 初始化为0，可后门读写
  val mem = new Mem(Bits(width bits), wordCount = depth).initBigInt(initData).simPublic()

  io.rdata := mem.readSync(
    enable = True,
    address = io.addr
  )

  // TODO:待测试
  def printSRAM = {
    println(mem.toStringMultiLine())
  }
}

class SRAMWriteOnly(width:Int, depth:Int, initData:Array[BigInt]) extends Component{
  // 同步写
  val io = new Bundle{
    val valid = in Bool()
    val addr = in UInt(log2Up(depth) bits)
    val wdata = in Bits(width bits)
  }

  // 初始化为0，可后门读写
  val mem = new Mem(Bits(width bits), wordCount = depth).initBigInt(initData).simPublic()

  mem.write(
    enable = io.valid,
    address = io.addr,
    data = io.wdata
  )

  // TODO:待测试
  def printSRAM = {
    println(mem.toStringMultiLine())
  }
}

object SRAM extends App{
  val depth = 2
  val initData = Array(BigInt(1),BigInt(2))
  Config.spinal.generateVerilog(new SRAM(8,depth,initData))
  Config.spinal.generateVerilog(new SRAMReadOnly(8,depth,initData))
  Config.spinal.generateVerilog(new SRAMWriteOnly(8,depth,initData))
}
