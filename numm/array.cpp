// numm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;


void rowSum(int a[][4],int row) {            //数组函数，形参中元素个数应该大于实参元素个数，且类型一致  不指定第一维度的大小，及时指定也会被忽略
    for (int i = 0; i < row; i++) {
        int sum=0;
        for (int j = 0; j < 4; j++) {
            sum += a[i][j];
        }
        a[i][0] = sum;
        sum = 0;
        }
}

int main()
{   
    int* ptr;//指针可以不用事先赋值即可定义；

    int a[10], b[10];//a,b是地址常量，无法赋值
    int c[10] = { 0,1,2,3,4 };
    int d[4] = {1,2,3,4};      //几种定义方式

    int e[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int f[][4] = {1,2,3,4};           //无需显式说明
    int g[2][3] = { {1,2,3},{1,2,3} };


    const float fa[5] = { 1.0,2.0,3.0 };   //不可更改，常量数组





    for (int i = 0; i < 10; i++) {
        a[i] = i * 2 - 1;
        b[9 - i] = a[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << "a[" << i << "]=" << a[i] << " ";
        cout << "b[" << i << "]=" << b[i] << endl;
    }


    //cout << a[10] << endl<<d[4]; //此处不算越界，为下标上界

    cout << "---数组作为函数参数的实现---" << endl;

    int table[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6} };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }


    rowSum(table, 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }



    cout << "---用一句语句求出数组元素个数---" << endl;
    const int summ = sizeof(g) / sizeof(g[0][0]);
    cout << "数组g元素个数为" << summ;
    return 0;


    }

