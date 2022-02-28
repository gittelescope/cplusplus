#pragma once
#ifndef _POINT_H
#define _POINT_H

class Point {
public:
    void initPoint(float x = 0, float y = 0) { this->x = x; this->y = y; }//this÷∏’Î
    void move(float offX, float offY) { x += offX; y += offY;}
    float getX() { return x; }
    float getY() { return y; }


private:
    float x, y;



};













#endif
