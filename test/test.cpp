// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
   // int(*cp)[9][8] = new int[7][9][8]();  //多维数组的指针
   // cout << cp<<endl;
  //  cout << *cp<<endl;
  //  cout << cp + 1+1 << endl;
  //  cout << *(cp + 1)+1;
   

    int i = 12;
    const int& p = i;
    cout << p<<endl;
    cout << sizeof(p) << " " << sizeof(i);




   // delete[]cp;
}

