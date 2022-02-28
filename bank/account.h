#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "date.h"
#include <string>

using namespace std;

class SavingsAccount {//�����˻���
private:
	string id;           //�˺�
	double balance;      //���
	double rate;         //����
	Date lastDate;       //�ϴα���������ڣ�
	double accumulation;  //�����ۼ�֮��
	static double total;  //�����˺��ܽ��      ��̬��Ա��ȫ�������һ������

	void record(const Date& date, double amount, const string& desc);//��¼һ���ˣ��ֱ�Ϊ���ڣ���˵��
	                                                                 //��ֵ����
	void error(const string& msg) const;//���������Ϣ

	double accumulate(const Date& date) const {
		return accumulation + balance * date.distance(lastDate);//��ɶ�ã���
	}

public:
	SavingsAccount(const Date& date, const string& id, double rate);


	const string& getId()const { return id; }              //����ʺ������Ϣ
	double getBalance() const { return balance; }
	double getRate() const { return rate; }


	static double getTotal() { return total; }

	void deposit(const Date& date, double amount, const string& desc);//�����ֽ�

	void withdraw(const Date& date, double amount,const string& desc);//ȡ���ֽ�

	void settle(const Date& date);//������Ϣ

	void show() const;
};



#endif // !__ACCOUNT_H__

