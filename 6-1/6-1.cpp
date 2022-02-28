// 6-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void swap(int& a, int& b) {    //&此处为引用，可直接改变变量值
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j]<<"  ";
        }
        cout << endl;
    }

    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            swap(a[i][j], a[j][i]);
         }
    }                                  //转置矩阵



    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
   




    return 0;
}
