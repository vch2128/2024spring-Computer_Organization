# 2023spring-Computer_Organization
NYCU 2023 spring, Computer Organization, prof. 葉宗泰
### Environment
OS: Ubuntu 22.04.4 LTS\
VM: UTM

### Template
```
git clone https://github.com/nycu-caslab/CO2024_source.git
```

### Labs
[Spec](https://nycu-caslab.github.io/CO2024/labs/Lab%200.html)\
0. ALU
1. Single Cycle CPU w/ Simple RISC-V Instructions 
```
verilator -Wall --cc SingleCycleCPU.v --exe example_testbench.cpp -trace
make -C obj_dir -f VSingleCycleCPU.mk VSingleCycleCPU
./obj_dir/VSingleCycleCPU
gtkwave waveform.vcd
```
