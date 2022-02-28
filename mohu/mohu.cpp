// mohu.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>


using namespace std;



void fuzzy(double a[4][4], double(& des)[4][4]) {
	double sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			sum = -1000000;
			for (int k = 0; k < 4; k++) {
				sum = max(sum, min(a[i][k], a[k][j]));
			}
			des[i][j] = sum;
		}
	}
};


int main()
{
    
	double  mat[4][4] = { {1,0.9,0.7,0.5},{0.9,1,0.7,0.6},{0.7,0.7,1,0.9},{0.5,0.6,0.9,1} };
	double  des[4][4];
   
	fuzzy(mat, des);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << des[i][j]<<"    ";
		}
		cout << endl;
	}
     

	cout << endl;

	double des2[4][4];
	fuzzy(des, des2);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << des2[i][j] << "    ";
		}
		cout << endl;
	}
    

}