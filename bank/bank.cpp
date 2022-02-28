// bank.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "account.h"
#include <iostream>
using namespace std;



int main()
{
    Date date1(2020, 1, 20);
    Date date2(2011, 10, 19);
   
    
    
     SavingsAccount accounts[] = { SavingsAccount(date1, "03755217", 0.015),SavingsAccount(date2, "02342342", 0.015)};

     const int n = sizeof(accounts) / sizeof(SavingsAccount);
    
     accounts[0].deposit(Date(2020, 6, 5), 5000, "salary");
     accounts[1].deposit(Date(2012, 6, 5), 5000, "salary");

     cout << endl;

     for (int i = 0; i < n; i++) {
         accounts[i].settle(Date(2021, 10, 19));
         accounts[i].show();
         cout << endl;
     }

     cout << "Total: " << SavingsAccount::getTotal() << endl;

     return 0;

}

