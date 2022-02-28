// string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    String(const char* cstr = 0);
    String(const String& str);
    String& operator=(const String& str);
    ~String();
    char* get_c_str() const { return m_data; }

private:
    char* m_data;
};

inline String::String(const char* cstr=0) {
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy_s(m_data, strlen(cstr)+1,cstr);//系统推荐使用strcpy_s
    }
    else {
        m_data = new char[1];
        *m_data = '\0';
    }
    cout << "构造函数已调用" << endl;
}

String::~String() {
    delete[] m_data;
    cout << "已析构" << endl;
}



int main()
{
    //for (int i = 0; i < 2; i++) {
     //   string city, state;
     //   getline(cin, city, ',');   //getline可以输出空格，制定好分隔符
     //   getline(cin, state);
    //    cout << "City:" << city << "  State:" << state << endl;
    //}
    String s1();
    //String s2("hello");
    


    return 0;


   }

