// const.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class R {
public:
    R(int r1,int r2,int a):r1(r1),r2(r2),a(a){}
    void print();
    void print() const;  //常函数
private:
    int r1, r2;
    const int a;
    static const int b;//常成员只能在初始化中赋值
};

//const int  R::a = 10;非静态数据成员不能再类外定义

const int R::b = 10;


void R::print() {
    cout << r1 << ":" << r2 <<endl;
}

void R::print() const {
    cout << r1 << ";" << r2 << endl;
}


int main()
{
    R a(5, 4,1);
    a.print();
    const R b(20, 52,2);
    b.print();  //b只能调用const 修饰的内部函数

    return 0;
}
