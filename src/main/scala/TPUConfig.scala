class TPUConfig {
  val inputDataWidth = 8
  val outputDataWidth = 16
  val arraySize = 8
  val peNum = 2
  val peSize = arraySize / peNum
  val sramDDepth = arraySize * 4 - 1
  val sramResDepth = arraySize * 2 - 1
}
