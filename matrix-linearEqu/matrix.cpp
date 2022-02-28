#include "Matrix.h"
#include <iostream>

using namespace std;

void Matrix::setMatrix(const double* values) {
	for (int i = 0; i < size * size; i++)
		elements[i] = values[i];                //数组赋值
}

Matrix::Matrix(int size /*= 2*/) :size(size) {
	elements = new double[size * size];   //动态内存分配
}

Matrix::~Matrix() {
	delete[]elements;                    //内存释放
}

void Matrix::printMatrix() const {
	cout << "The Matrix is:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << element(i, j) << " ";
		}
		cout << endl;
	}

}
