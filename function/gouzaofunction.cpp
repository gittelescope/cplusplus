#include <iostream>

using namespace std;

class Clock {
public:
	Clock(int newH, int newM, int newS);
	Clock();//Ĭ�Ϲ��캯��   ��ʽ�൱���Զ��幹�캯��������
	void setTime(int newH, int newM, int newS);
	void showTime() { cout << hour << ":" << minute << ":" << second<<endl; }//ע��

private:
	int hour, minute, second;
};//����ֺŲ����١�����������

Clock::Clock(int newH, int newM, int newS) :
	hour(newH),minute(newM),second(newS){}   //��ʼ���б� ����дreturn���

//Clock::Clock() : hour(0), minute(0), second(0) {}

 Clock::Clock():Clock(0,0,0){}  //ί�й��캯��

int main() {
	Clock c(0, 0, 0);
	Clock c2;
	c.showTime();
	c2.showTime();
	return 0;

}

