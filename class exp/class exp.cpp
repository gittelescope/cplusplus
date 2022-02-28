// class exp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
enum CPU_Rank { P1=1, P2, P3, P4, P5, P6, P7 };

class CPU {
public:

    CPU(CPU_Rank c,int f,float v ){
        rank = c;
        frequency = f;
        volatage = v;
        cout << "构造了一个CPU！" << endl;
    }

    ~CPU() {
        cout << "析构了一个CPU！" << endl;
    }



    void run();
    void stop();

   
private:
    CPU_Rank rank;
    int frequency;
    float volatage;
};

int main()
{



    }

