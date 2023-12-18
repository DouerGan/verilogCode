#include <verilated.h>          //导入verilator的库
#include <mOdule.h>             //导入电路文件的头文件
#include <verilated_vcd_c.h>
#include <random>
#include <iostream>
int main(int argc , char *argv[])
{
    VerilatedContext* contextp = new VerilatedContext;      //创建仿真跟踪管理器
    contextp  ->  debug(0);                                 //关闭调试
    contextp  ->  randReset(2);                             //设置随机化复位策略2
    contextp  ->  traceEverOn(true);                        //开启追踪
    contextp  ->  commandArgs(argc,argv);                   //开启命令行参数追踪

    mOdule* top = new mOdule{contextp};                     //将电路对象接入仿真追踪管理器

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,0);
    tfp->open("wave.vcd");                                  //配置生成VCD波形文件

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0,1);
    int rand = dis(gen);
    std::cout << rand << std::endl;                         //添加随机值模块

    top->i_rst = 1;
    top->i_clk = 0;
    top->i_a   = 1;
    top->i_b   = 1;

    contextp->timeInc(1);
    top->i_rst = 0;
    while(!contextp->gotFinish())
    {
        contextp->timeInc(1);
        top->i_clk = !top->i_clk;
        if(!top->i_clk)
        {
            if(contextp->time() >= 60) break;
            else {top->i_a = dis(gen); top->i_b = dis(gen);}
        }
        top->eval();
        tfp->dump(contextp->time());
        VL_PRINTF("[%" PRId64 "] clk=%x rst=%x i_a=%x i_b=%x out=%x \n",
        contextp->time(), top->i_clk, top->i_rst, top->i_a, top->i_b, top->o_f);
    }
    top->final();
    tfp->close();
    return 0;
}
