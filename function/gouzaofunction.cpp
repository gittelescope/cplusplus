#include <iostream>

using namespace std;

class Clock {
public:
	Clock(int newH, int newM, int newS);
	Clock();//默认构造函数   形式相当于自定义构造函数的重载
	void setTime(int newH, int newM, int newS);
	void showTime() { cout << hour << ":" << minute << ":" << second<<endl; }//注意

private:
	int hour, minute, second;
};//这个分号不能少。。。。。。

Clock::Clock(int newH, int newM, int newS) :
	hour(newH),minute(newM),second(newS){}   //初始化列表 不能写return语句

//Clock::Clock() : hour(0), minute(0), second(0) {}

 Clock::Clock():Clock(0,0,0){}  //委托构造函数

int main() {
	Clock c(0, 0, 0);
	Clock c2;
	c.showTime();
	c2.showTime();
	return 0;

}

