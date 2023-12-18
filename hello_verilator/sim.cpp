#include <verilated.h>
#include <mOdule.h>
int main(int argc , char* argv[])
{
    if(false && argc && argv) {}
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc,argv);

    mOdule* top = new mOdule{contextp};
    while(!contextp->gotFinish())
    {
        top->eval();
    }
    top->final();
    delete top;
    return 0;
}
