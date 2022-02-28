// struct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    int num;
    string name;
    char sex;
    int age;
};


class Examinfo {
private:
    string name;                   //命名了一个新类名 mode 枚举类型
    enum {Grade,Pass,Percent} mode;//枚举类型用于声明一组命名的常数，当一个变量有几种可能的取值时，可以将它定义为枚举类型。 
    union {
        char grade;
        bool pass;
        int percent;
    };

public:
    Examinfo(string name, char grade):name(name),mode(Grade),grade(grade){}
    Examinfo(string name,bool pass):name(name),mode(Pass),pass(pass){}
    Examinfo(string name, int percent):name(name),mode(Percent),percent(percent){}
    void  show();
};

void Examinfo::show() {
    cout << name << ":";
    switch (mode) {
    case(Grade):cout << grade; break;
    case(Pass):cout << (pass ? "pass" :"fail"); break;
    case(Percent):cout << percent; break;
    }

    cout << endl;
}

int main()
{
    Student stu{ 97001,"wu",'M',28 };//E0144	"const char *" 类型的值不能用于初始化 "char" 类型的实体	
    cout << stu.name << endl;
    Examinfo  course1("english", 'B');
    Examinfo  course2("calculus", true);//居然是true而不是True
    Examinfo  course3("c++", 85);
    course1.show();
    course2.show();
    course3.show();
    return 0;
   }

