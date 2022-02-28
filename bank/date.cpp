#include "date.h"
#include <iostream>
#include<cstdlib>

using namespace std;

const int DAYS_BEFORE_MONTH[] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };


Date::Date(int year, int month, int day):year(year), month(month), day(day) {        //构造函数，生成用户输入的日期
   if (day <= 0 || day > getMaxDay()) {   //检查输入日期合法性，不能小于0也不能超过当月最大值
       cout << "Invalid date:";
       show();
       cout << endl;
       exit(1);

    }
   int years = year - 1;
   totalDays = years * 365 + years / 4 - years / 100 + years / 400+DAYS_BEFORE_MONTH[month-1]+day;//计算总日期
   if (isLeapYear() && month > 2) totalDays++;

  }

int Date::getMaxDay()const {                //定义getMaxDay()函数，寻找用户输入月份所包含的天数
    if (isLeapYear() && month == 2)
        return 29;
    else
        return DAYS_BEFORE_MONTH[month] - DAYS_BEFORE_MONTH[month - 1];
}

void Date::show()const {                     //定义show函数
    cout << getYear() << "-" << getMonth() << "-" << getDay();
}