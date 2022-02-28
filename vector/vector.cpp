// vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<cmath>
using namespace std;


double average(const vector<double>&arr) {
    double sum = 0;
    for (unsigned i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return sum / arr.size();
     
}
int main()
{
    unsigned n;
    cout << "n= ";
    cin >> n;

    vector<double>arr(n);
    cout << arr[0]<<endl;
    for (unsigned i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "平均数为" << average(arr)<<endl;
    cout << arr[0];


  }

