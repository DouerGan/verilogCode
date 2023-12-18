#include <mOdule.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <random>
#include <iostream>
int main(int argc,char* argv[])
{
    VerilatedContext* contextp = new VerilatedContext;
    contextp -> debug(0);
    contextp -> randomReset(2);
    contextp -> traceEverOn(true);
    contextp -> commandArgs(argc,argv);

    mOdule* top = new mOdule{contextp};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace(tfp,0);
    tfp -> open("sim_wave.vcd");

    std::random_device dvc_rand;
    std::mt19937



}

