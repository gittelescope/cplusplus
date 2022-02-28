// static member.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


class Point {
public:
    Point(int x,int y) :x(x), y(y) { count++; }
    Point(Point& p) {
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point() {
        count--;
    }
    int getX() { return x; }
    int getY() { return y; }

   static void showCount() {
        cout << "  the count is" << count<<endl;//静态函数
    }

   friend float dist(const Point& a, const Point& b);  //友元，单向关系

private:
    int x, y=0;
    static int count;//带有类内初始值设置的必须是常量？？ 静态成员变量的初始化有些特别，是在类外初始化且不能在带有 static 关键字； 带有类内初始值设定项的成员必须为常量（且为integral types）；

};


int Point::count = 0;

//Point::Point(int xx, int yy):xx(x), yy(y) {}

float dist(const Point& a,const Point& b) {  //引用传递，可能改变原始数据
    double x = a.x + a.y;
    return x;
}

int main()
{
    Point a(4, 5);
    cout << "Point A :" << a.getX() << "," << a.getY();
    a.showCount();
    Point b(a);
    cout << "Point B :" << b.getX() << "," << b.getY();
    b.showCount();//与a展示一样
    
    Point a(4, 5);
    cout << "Point A :" << a.getX() << "," << a.getY();
    a.showCount();
    Point b(a);
    cout << "Point B :" << b.getX() << "," << b.getY();
    b.showCount();//与a展示一样

   // Point::showCount();
   // cout << a.count; 不可访问。0个对象无法查询
    

    return 0;
}
