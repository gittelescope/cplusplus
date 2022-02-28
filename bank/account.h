#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "date.h"
#include <string>

using namespace std;

class SavingsAccount {//储蓄账户类
private:
	string id;           //账号
	double balance;      //余额
	double rate;         //利率
	Date lastDate;       //上次变更余额的日期；
	double accumulation;  //余额按日累加之和
	static double total;  //所有账号总金额      静态成员，全体对象共享一份数据

	void record(const Date& date, double amount, const string& desc);//记录一笔账，分别为日期，金额，说明
	                                                                 //左值引用
	void error(const string& msg) const;//报告错误消息

	double accumulate(const Date& date) const {
		return accumulation + balance * date.distance(lastDate);//有啥用？？
	}

public:
	SavingsAccount(const Date& date, const string& id, double rate);


	const string& getId()const { return id; }              //输出帐号余额信息
	double getBalance() const { return balance; }
	double getRate() const { return rate; }


	static double getTotal() { return total; }

	void deposit(const Date& date, double amount, const string& desc);//存入现金

	void withdraw(const Date& date, double amount,const string& desc);//取出现金

	void settle(const Date& date);//结算利息

	void show() const;
};



#endif // !__ACCOUNT_H__

