#include <mOdule.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <random>
#include <iostream>


int main(int argc , char* argv[])
{
    VerilatedContext* contextp = new VerilatedContext;
    contextp -> debug(0);
    contextp -> commandArgs(argc,argv);
    contextp -> traceEverOn(true);
    contextp -> randReset(2);

    mOdule* top = new mOdule{contextp};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace(tfp,0);
    tfp -> open("wave.vcd");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0,1);
    int rand = dis(gen);
    std::cout << "test:" << rand << std::endl;

    top -> a = 1;
    top -> b = 0;
    top -> s = 1;

    contextp -> timeInc(1);
    while(!contextp -> gotFinish())
    {
        contextp -> timeInc(1);
        top -> a = dis(gen);
        top -> b = dis(gen);
        top -> s = dis(gen);
        top -> eval();
        tfp -> dump(contextp -> time());
        if(contextp -> time() >60) break;
    }
    top -> final();
    tfp -> close();
    return 0;
}
