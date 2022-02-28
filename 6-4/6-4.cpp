// 6-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int compute(int a, int b, int(*func)(int, int)) {
	return func(a, b);                                 //函数回调
};

int max(int a, int b) {
	return ((a > b) ? a : b);
}

int min(int a, int b) {
	return ((a > b) ? b : a);
}

int sum(int a, int b) {
	return a + b;
}

int main()
{
	int a, b, res;
	cout << "请输入整数a"; cin >> a;
	cout << "请输入整数b"; cin >> b;

	res = compute(a, b, &max);
	cout << "最大值为" << res << endl;


	res = compute(a, b, &min);
	cout << "最小值为" << res << endl;

	res = compute(a, b, &sum);
	cout << "两数之和为" << res << endl;


	return 0;

}

