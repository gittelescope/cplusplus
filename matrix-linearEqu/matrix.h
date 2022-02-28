#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix {
public:
    Matrix(int size= 2);
    ~Matrix();
    int getSize()const { return size; }
    void setMatrix(const double *values);
    void printMatrix() const;
    double element(int i, int j) const {return elements[i * size + j];}
    double& element(int i, int j) { return elements[i * size + j]; }



private:
    int size;
    double * elements;


};







#endif //_MATRIX_H
