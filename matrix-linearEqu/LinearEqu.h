#ifndef _LINEAREQU_H
#define _LINEAREQU_H
#include "matrix.h"

class LinearEqu :public Matrix {
public:
	LinearEqu(int size = 2);
	~LinearEqu();
	void setLinearEqu(const double* a, const double* b);//方程赋值

	bool solve();                  //全选主元
	void printLinearEqu ()const;   //显示方程
	void printSolution() const;   //显示解

private:
	double* sums;                  //方程右端项
	double* solution;              //方程的解

};


#endif  //_LINEAREQU_H
