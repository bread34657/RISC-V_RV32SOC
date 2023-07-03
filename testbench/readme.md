# Testbench
support Verilator ,RISC-V offical instruction test,simple os and GTKwave.  

tb make(verilator):  
   &ensp; verilator -Wall --cc --exe --build testbench.cpp sim_mem.cpp soc_top.v --trace
   &ensp; make -C obj_dir -f Vsoc_top.mk

riscv test instruction(test for RV32IM):  
  &ensp;  make  
  &ensp;  python3 test_all_isa.py  

test assembly :  
  &ensp;  ./obj_dir/Vsoc_top test_src_simple/test.bin 2  
  &ensp;  gtkwave wave.vcd  

ctest (test c program):  
  &ensp;  make  
   &ensp; ./obj_dir/Vsoc_top testsource/test.bin  
 
