// 补7-3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class B {
public:
	B();
	B(int i);
	~B();
	void print() const;

private:
	int b;
};

B::B() {
	b = 0;
	cout << "B的默认构造函数启动" << endl;
}

B::B(int i) {
     b = i;
	 cout << "B的构造函数启动" << endl;
}

B::~B() {
	cout << "B的析构函数启动" << endl;
}

void B::print()const {
	cout << b << endl;
}

class C :public B {
public:
	C();
	C(int i, int j);
	~C();
	void print() const;

private:
	int c;
};

C::C() {
	c = 0;
	cout << "C的默认构造函数启动" << endl;
}

C::C(int i, int j):B(i),c(j) {
	cout << "C的构造函数启动" << endl;
}

C::~C() {
	cout << "C的析构器启动" << endl;
}

void C::print() const {
	B::print();
	cout << c << endl;
}




int main()
{
	C obj(5, 6);
	obj.print();
	return 0;


}
