// 7-3.cpp :类型兼容规则
//

#include <iostream>
using namespace std;


class Base1 {
public:
    void display() const { cout << "Base1::display()" << endl; }
    int a = 1;
};

class Base2 :public Base1 {
public:
    void display() const { cout << "Base2::display()" << endl; }
    int a = 2;
};

class Derived :public Base2 {
public:
    void display() const { cout << "Derived::display()" << endl; }
    int a = 3;
};

void fun(Base1* ptr) {
    ptr->display();
}                              

int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;
    
    fun(&base1);
    fun(&base2);
    fun(&derived);
    
   // base1 = base2;     //直接赋值
    cout << base1.a;

    return 0;
   }

