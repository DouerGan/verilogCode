TARGET := hello
all:
	verilator --cc --top-module $(TARGET) --prefix mOdule --exe  -j hello.v sim.cpp
run:
	./obj_dir/mOdule
clean:
	rm -rf ./obj_dir

