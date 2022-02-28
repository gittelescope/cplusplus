// 7-1-3.cpp : 此文件包含 "main" 函数。派生类的生成过程
//

#include <iostream>
using namespace std;

int Account(int& a) {
    cout <<"a="<<a<<endl;
    a = 2;
    return 0;
}


int main()
{   
    int i = 1;
    Account(i);
    cout << i;
    return 0;
}

