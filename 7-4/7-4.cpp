// 7-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Base1 {
public:
    Base1(int i) { cout << "constructing Base1" << i << endl; }
    ~Base1() { cout << "destructing Base1" << endl; }

};

class Base2 {
public:
    Base2(int j) { cout << "constructing Base2" << j << endl; }
    ~Base2() { cout << "destructing Base2" << endl; }
};

class Base3 {
public:
    Base3() { cout << "constructing Base3"  << endl; }
    ~Base3() { cout << "destructing Base3" << endl; }
};

class Derived :public Base2, public Base1, public Base3 {
public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b),member1(c),member2(d){}//形参表:初始化列表

private:
    Base1 member1;
    Base2 member2;
    Base3 member3;
};

int main()
{   
    Derived obj(1, 2, 3, 4);
    return 0;

    //猜："constructing Base2"
    //    "constructing Base1"
    //    "constructing Base3"  
    //    "constructing Base1"
    //    "constructing Base2"
    //    "constructing Base3"

    //对了^-^

    //再猜:"destructing base1"
     //   "destructing base2"
     //   "destructing base3"
     //   "destructing base2"
     //   "destructing base1"
     //   "destructing base3"    
    //错了>_<
    //最后被构造最先被析构
    }

