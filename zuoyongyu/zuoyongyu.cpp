// zuoyongyu.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int i=1; //global var  文件作用域

void other() {
    static int a = 2;  //静态局部变量，全局寿命
    static int b;      //只有第一次进入函数时初始化

    int c = 10; //每次进入函数初始化，动态生存期

    a += 2; i += 32; c += 5;
    cout << "--Other--" << endl;
    cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
    b = a;

}



int main()
{

    static int a;  //静态变量不初始化，值默认为0
    int b = -10;
    int c = 0;

    cout << "--Main--" << endl;
    cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;//i=1,a=0,b=-10,c=0;
    c += 8;
    other();//i=33,a=4,b=0,c=15
    cout << "--Main--" << endl;
    cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;//i=33,a=0,b=-10,c=8.
    i += 10;
    other();//i=75;a=6,b=4,c=15  other函数内的静态变量a,b不会变
    return 0;

   }






//    i = 5;
  //  {
  //      int i;
 //       i = 7;
 //       cout << "i =" << i << endl;//i=7
//    }
//    cout << "i =" << i << endl;//i=5
