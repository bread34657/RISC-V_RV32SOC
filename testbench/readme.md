# Testbench
support Verilator ,RISC-V offical instruction test,simple os and GTKwave.  

tb make(verilator):
    verilator -Wall --cc --exe --build testbench.cpp sim_mem.cpp soc_top.v --trace
    make -C obj_dir -f Vsoc_top.mk

riscv test instruction(test for RV32IM):
    make
    python3 test_all_isa.py

test assembly :
    ./obj_dir/Vsoc_top test_src_simple/test.bin 2
    gtkwave wave.vcd

ctest (test c program):
    make 
    ./obj_dir/Vsoc_top testsource/test.bin
 
