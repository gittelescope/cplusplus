#ifndef _LINEAREQU_H
#define _LINEAREQU_H
#include "matrix.h"

class LinearEqu :public Matrix {
public:
	LinearEqu(int size = 2);
	~LinearEqu();
	void setLinearEqu(const double* a, const double* b);//���̸�ֵ

	bool solve();                  //ȫѡ��Ԫ
	void printLinearEqu ()const;   //��ʾ����
	void printSolution() const;   //��ʾ��

private:
	double* sums;                  //�����Ҷ���
	double* solution;              //���̵Ľ�

};


#endif  //_LINEAREQU_H
