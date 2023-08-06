import spinal.core._
import spinal.lib._

// 验证各种想法的类
class Draft(dataWidth:Int, dataNum:Int, depth:Int) extends Component {
  // 同步读
  val io = new Bundle {
    val addr = in UInt (log2Up(depth) bits)
    val rdata = out (SRAMData(dataWidth,dataNum))
  }


  // 初始化为0，可后门读写
  val mem = new Mem(SRAMData(dataWidth,dataNum), wordCount = depth).init(Array.fill(depth)(SRAMData(dataWidth,dataNum).initValue(Array.fill(dataNum)(-3))))

  io.rdata := mem.readSync(
    enable = True,
    address = io.addr
  )
}

object DraftTest extends App{
  val depth = 2
  val dataWidth = 8
  val dataNum = 4

  Config.spinal.generateVerilog(new Draft(dataWidth,dataNum,depth))
}