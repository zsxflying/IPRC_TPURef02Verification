import spinal.core._
import spinal.core.sim._

object Config {
  val dumpDir = s"dump/" // 打印文件所在目录

  def spinal = SpinalConfig(
    targetDirectory = "gen",
    defaultConfigForClockDomains = ClockDomainConfig(
      resetActiveLevel = LOW
    ),
    onlyStdLogicVectorAtTopLevelIo = true
  )

  def sim = SimConfig.withConfig(spinal).withWave.withVerilator

}
