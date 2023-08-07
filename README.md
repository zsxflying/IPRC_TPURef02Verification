# TPU-Tenosr-Processing-Uint
本项目是针对 [TPU-Tenosr-Processing-Uint](https://github.com/leo47007/TPU-Tensor-Processing-Unit) 中8*8 Systolic Array的功能正确性进行验证的spinalHDL项目，同时也是一个自用的spinalHDL的练手项目。

## 文件结构
- TPU_verification
  - dump // 打印文件目录
  - gen // 生成的verilog代码
  - simWorkspace
    - gtkmark.gtkw // gtkwave的信号存档
    - openwavefile.sh // 快速打开波形文件的脚本
  - src 
    - main // spianlhdl模块代码
      - scala
        - Config // 各种配置，如：spinalConfig，dumpDir
        - SRAM // 模拟输入、输出sram的模块
        - SRAMReadOnly // 只读ram
        - SRAMWriteOnly // 只写ram
        - TPU // tpu黑盒
        - TPUConfig // tpu配置，如：数据宽度
    - test // spinalhdl测试代码
      - scala
        - MatrixOperation // 各种矩阵操作，如：生成、变换
        - TPUSim // 主仿真文件
    - verilog // 原TPU-Tenosr-Processing-Uint项目的verilog文件
  - build.sbt // sbt配置文件
  - README

## 说明
- 请使用默认TPU参数，其他参数正确性未验证
- 复位信号低电平有效
- 用到的sram为同步读写

## 如何运行
- 必备：verilator(iverilog也可以使用，需要修改Config中的配置，但不建议)
- 运行TPUSim.scala中的object TPUSim
- 运行`simWorkspace/openwavefile.sh`可快速打开波形文件，并加载信号存档

## 可参考的设计（自用）
- Mem的使用(SRAM.scala)
  - 如何使用`Array[Array[Int]]`初始化Mem
  - 如何定义读写行为
  - 使用Bundle定义存储数据，并使用`:=`赋值
- 字符串表示的二进制有符号数与Int的转换
- 黑盒的使用，可以当做模板(TPU.scala)
- Config配置(Config.scala)
  - 复位有效电平
  - 同步复位（防止复位消失先于时钟信号产生）
