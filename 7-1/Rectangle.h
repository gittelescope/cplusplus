#pragma once
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"

class Rectangle :public Point {   //公有继承Point类
public:
	void initRectangle(float x, float y, float w, float h) {                //新增函数
		initPoint(x, y);                                                    //调用基类函数成员
		this->w = w;
		this->h = h;

	   }

	float getW() { return w; }
	float getH() { return h; }

private:
	float w, h;                                                           // 新增私有成员
    
};


class Rectangle2 :private Point {  //私有继承
public:
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y);//类的成员依旧可以调用私有继承过来的公有成员，对象则不可以
		this->w = w;
		this->h = h;
	
	}

	void move2(float offX, float offY) { move(offX,offY); }//通过move2来调用已经是私有成员的move函数


	float getX()  {return Point::getX();}
	float getY() { return Point::getY();}
	float getW() { return w; }
	float getH() { return h; }

private:
	float w, h;

};






#endif // 

