TARGET := mux2
all:
	verilator --trace --cc --exe --top-module $(TARGET) --prefix mOdule $(TARGET).v sim.cpp && make -C ./obj_dir -f mOdule.mk mOdule
clean:
	rm -rf ./obj_dir
	rm ./wave.vcd
sim:
	./obj_dir/mOdule +trace
	gtkwave ./wave.vcd
