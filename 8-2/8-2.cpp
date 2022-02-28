// 8-2.cpp : 前/后 置运算符重载
//

#include <iostream>
using namespace std;

class Clock {
private:
    int hour, minute, second;


public:
    Clock(int hour = 0,int minute = 0, int second = 0);
    void show() const;
    Clock & operator ++();   //函数引用
    Clock operator ++(int);//函数中不用写参数
};

Clock::Clock(int hour, int minute, int second) {
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second <= 60) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    else
        cout << "Time error!" << endl;
}

void Clock::show() const {
    cout << hour<<":" << minute << ":" << second<<endl;
}


Clock& Clock::operator++() {
    second++;
    if (second >= 60) {
        second -= 60;
        minute++;
        if (minute >= 60) {
            minute -= 60;
            hour = (hour + 1) % 24;
        }
    }

    return *this;
}


Clock Clock::operator++(int) {
    Clock old = *this;
    ++(*this);

    return old;
}


int main()
{

    Clock myClock(23,59,59);
    cout << "first time output: ";
    myClock.show();
    cout << "show myClock++: ";
    (myClock++).show();
    cout << "show ++ myClock";
    (++myClock).show();
    

    return 0;

   }

