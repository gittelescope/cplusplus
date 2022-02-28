//date.h

#ifndef _DATE_H_
#define _DATE_H_
class Date {
private:
	int year;
	int month;
	int day;             //用户输入年月日
	int totalDays;       //总天数

public:
	Date(int year, int day, int month);
	int getYear()const { return year; }            //输出年月日
	int getMonth() const { return month;}
	int getDay() const { return day;}
    
	int getMaxDay() const;                       //判断当月多少天

	bool isLeapYear() const {                    //判断是否为闰年
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
		//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
		//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
	}

	void show() const;                           //输出当前日期

	int distance(const Date& date) const {       //计算两个日期间隔日期   
		return totalDays - date.totalDays;
	}
};

#endif // !_DATE_H

