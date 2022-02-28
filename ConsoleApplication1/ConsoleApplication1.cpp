
#include <iostream>
using namespace std;

class Point {
public:
    Point(int xx = 0, int yy = 0) { x = xx; y = yy;}
    Point(const Point& p);
    ~Point();//定义了就要在后面详细定义
    int getX() { return x; }
private:
    int x, y;
};

Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
    cout << "calling the copy constructor" << endl;
}

Point::~Point(){}

void fun1(Point p) {
    cout << p.getX() << endl;
}

Point fun2() {
    Point a;
    return a;
}
int main()
{
    Point a;
    Point b(a);//调用一次;
    cout << b.getX() << endl;
    fun1(b);
    b = fun2();   //不会构造，赋值方式  赋值运算符函数
    cout << b.getX() << endl;
    return 0;
}

