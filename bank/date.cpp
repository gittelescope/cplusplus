#include "date.h"
#include <iostream>
#include<cstdlib>

using namespace std;

const int DAYS_BEFORE_MONTH[] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };


Date::Date(int year, int month, int day):year(year), month(month), day(day) {        //���캯���������û����������
   if (day <= 0 || day > getMaxDay()) {   //����������ںϷ��ԣ�����С��0Ҳ���ܳ����������ֵ
       cout << "Invalid date:";
       show();
       cout << endl;
       exit(1);

    }
   int years = year - 1;
   totalDays = years * 365 + years / 4 - years / 100 + years / 400+DAYS_BEFORE_MONTH[month-1]+day;//����������
   if (isLeapYear() && month > 2) totalDays++;

  }

int Date::getMaxDay()const {                //����getMaxDay()������Ѱ���û������·�������������
    if (isLeapYear() && month == 2)
        return 29;
    else
        return DAYS_BEFORE_MONTH[month] - DAYS_BEFORE_MONTH[month - 1];
}

void Date::show()const {                     //����show����
    cout << getYear() << "-" << getMonth() << "-" << getDay();
}