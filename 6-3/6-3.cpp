// 6-3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

int* newintvar() {
    int* p = new int();//new为运算符，返回对象为指针
    return p;     //返回的是地址
}   


int main()
{

    int* intptr = newintvar();
    *intptr = 5;       
    delete intptr;   //否则造成内存泄露

  }

