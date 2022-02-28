// 6-5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Point {
public:
    Point(int xx = 0, int yy = 0);
    Point(Point& p);
    int getX() { return x; }
    int getY() { return y; }
private:
    int x, y;
};

Point::Point(int xx, int yy) :x(xx), y(yy) {}

Point::Point(Point& p) {
    x = p.x;
    y = p.y;
}


int main()
{

    Point a(4, 5);
    Point *p1 = &a;
    cout << p1->getX() << endl;   //指针名访问对象成员
    cout << a.getX() << endl;
    cout << (*p1).getX() << endl;  //隐含着一个this指针

    return 0;


   }
