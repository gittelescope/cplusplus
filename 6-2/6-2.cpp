// 6-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;
//--- 指针参数函数---
void spiltFloat(float x, float* f, int* n) {
   *n = static_cast<int>(x);
   *f = x - *n;
   cout << "整数是" << *n << endl;
   cout << "小数是" << *f << endl;

}

int main()
{   

    cout << "---指针的基础定义---"<<endl;
   // float x,f;
    int n=0;
   // cout << "请输入三个小数" << endl;
   // for (int i = 0; i < 3; i++) {
   //     cin >> x;
   //     spiltFloat(x, &f,&n);    //如果直接使用指针，还要需要初始化，此处为计算地址！！！！
   // }
    
    cout << *&n<<"    "<<&n<<endl;
    int* p;//指针必须先赋值后，才能使用；
    p = &n;
    int const* q;   //常量指针


    cout << "---void指针---" << endl;

    void* pv;         //任何类型的指针都可以赋值给void;
    pv = &n;

    int* pint = static_cast<int*>(pv);  //强制转换
    cout << *pint<<endl;

    cout << "---指针运算---" << endl;
    int* pa = &n;
    cout << *(pa + 1) << pa[1]<<endl;

    int* pb = NULL;
    pb = 0;       //都表示为空指针

    cout << "---用指针处理数组元素---" << endl;
    int array[5] = {1,2,3,4,5};
    cout << array << "  " << &array[0] << endl;
    cout << *(array + 2)<<endl;  //array即为首地址

    cout << "---指针数组---" << endl;
    
    int line1[] = { 1,0,0 };
    int line2[] = { 0,1,0 };
    int line3[] = { 0,0,1 };

   int *pc[3] = { line1,line2,line3 };

   cout << "单位矩阵显示" << endl;
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           cout << pc[i][j] << " ";
       }
       cout << endl;
   }
   
   cout << "---" << endl;
   int array2[3][3] = { {11,12,13},{21,22,23},{31,32,33}};
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           cout << *(*(array2 +i)+ j) << " ";//指针数组的表现形式！！！！！！
       }
       cout << endl;
   }
   cout << "array2的地址为" << array2<<endl;
   cout << "array2[0]的地址为" << array2[0] << endl;
   cout << "array2[1]的地址为" << array2[1] << endl;
   cout << "array2[0][1]的地址为" << &array2[0][1] << endl;
   cout << "*(array2+1) " << *(array2+1) << endl;


    return 0;
}

