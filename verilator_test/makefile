TARGET := test
all:
	verilator --trace --cc --exe --top-module $(TARGET)   --prefix mOdule test.v main.cpp && make -C ./obj_dir -f mOdule.mk mOdule
clean:
	rm -rf ./obj_dir
	rm ./wave.vcd
sim:
	./obj_dir/mOdule +trace
	gtkwave ./wave.vcd
