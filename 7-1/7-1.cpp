// 7-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Rectangle.h"



using namespace std;

int main()
{
   
    Point r1;
    Rectangle r2, *pb1;
    r1 = r2 ;
    //类型兼容原则


    Rectangle2 rect;
    rect.initRectangle(2, 3, 20, 10);
    rect.move2(3, 2); //移动矩形位置
    cout << "这个矩形的参数为" << endl;
    cout << rect.getX() << "," << rect.getY() << "," << rect.getH() << "," << rect.getW()<< endl;
    return 0;

   }

