// zuhelei.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
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

Point::Point(int xx,int yy):x(xx),y(yy){}//不可更改构造函数默认值

Point::Point(Point& p) {
    x = p.x ;
    y = p.y;
    cout << "调用了point类的复制构造函数"<<endl;
}


class Line {
public:
    Line(Point xp1, Point xp2);
    Line(Line& l);
    double getLine() { return len; }
private:
    Point p1, p2;
    double len;
};
Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2) {
    cout << "调用了line类的构造函数"<<endl;
    double x = static_cast<double>(p1.getX()) - static_cast<double>(p2.getX());
    double y = static_cast<double>(p1.getY()) - static_cast<double>(p2.getY());
    len = sqrt(x * x + y * y);
}

Line::Line(Line& l) :p1(l.p1), p2(l.p2) {//初始化点，调用point复制构造函数
    cout << "调用了line类的拷贝构造函数"<<endl;
    len = l.len;
}

int main()
{   
    Point myp1(1, 1), myp2(2, 2);   //建立point对象
    Line line(myp1, myp2);          //建立line对象
    Line line2(line);               //拷贝line对象
    cout << "the length of line is " << line.getLine() << endl;
    cout << "the length of line2 is " << line.getLine() << endl;

    }

