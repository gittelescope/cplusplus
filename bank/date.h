//date.h

#ifndef _DATE_H_
#define _DATE_H_
class Date {
private:
	int year;
	int month;
	int day;             //�û�����������
	int totalDays;       //������

public:
	Date(int year, int day, int month);
	int getYear()const { return year; }            //���������
	int getMonth() const { return month;}
	int getDay() const { return day;}
    
	int getMaxDay() const;                       //�жϵ��¶�����

	bool isLeapYear() const {                    //�ж��Ƿ�Ϊ����
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
		//��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ���꣨��2004�ꡢ2020��Ⱦ������꣩��
		//�������꣺����������������ģ�������400�ı����������꣨��1900�겻�����꣬2000�������꣩��
	}

	void show() const;                           //�����ǰ����

	int distance(const Date& date) const {       //�����������ڼ������   
		return totalDays - date.totalDays;
	}
};

#endif // !_DATE_H

