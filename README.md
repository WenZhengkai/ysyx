# 2025年集创赛竞业达杯RVgogo团队工程项目

## 运行方式

### 编译Chisel项目
进入路径`npc/vsrc/chisel-npc`
执行`make doit`
编译得到`npc/vsrc/chisel-npc/generated`中的Verilog代码
### 编译Verilog
进入路径`npc/sim`
依次执行`make simnw` `make build` `make run`
编译并且执行示例程序
### cpu-tests示例运行
进入路径`am-kernels/tests/cpu-tests`
执行`make ARCH=riscv32e-npc run`
### microbench示例运行
进入`am-kernels/benchmarks/microbench`
执行`make ARCH=riscv32e-npc mainargs=test run`
### RT-Thread示例运行
进入`rt-thread-am/bsp/abstract-machine`
执行`make ARCH=riscv32e-npc run`