#pragma once
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"

class Rectangle :public Point {   //���м̳�Point��
public:
	void initRectangle(float x, float y, float w, float h) {                //��������
		initPoint(x, y);                                                    //���û��ຯ����Ա
		this->w = w;
		this->h = h;

	   }

	float getW() { return w; }
	float getH() { return h; }

private:
	float w, h;                                                           // ����˽�г�Ա
    
};


class Rectangle2 :private Point {  //˽�м̳�
public:
	void initRectangle(float x, float y, float w, float h) {
		initPoint(x, y);//��ĳ�Ա���ɿ��Ե���˽�м̳й����Ĺ��г�Ա�������򲻿���
		this->w = w;
		this->h = h;
	
	}

	void move2(float offX, float offY) { move(offX,offY); }//ͨ��move2�������Ѿ���˽�г�Ա��move����


	float getX()  {return Point::getX();}
	float getY() { return Point::getY();}
	float getW() { return w; }
	float getH() { return h; }

private:
	float w, h;

};






#endif // 

