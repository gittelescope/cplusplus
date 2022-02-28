// leftRef.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

//int foo(int& x) {
//    return x + 10;
//}
//
//int foo(const int& x) {
//    return x + 10;
//}

class Cmystring {
 
public:
    char* p_buffer;
    int   m_ilen;
    Cmystring( const char* pString) {
        m_ilen = strlen(pString)+1;//内存溢出!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        p_buffer = new char[m_ilen];
        cout << "构造函数已调用" << endl;
    }

    ~Cmystring() {
        m_ilen = 0;
        if (p_buffer != nullptr) {
            delete[] p_buffer;
        }
        cout << "已析构" << endl;
    }

    Cmystring(Cmystring& other) noexcept {
        this->m_ilen = other.m_ilen;
        this->p_buffer = new char[m_ilen];
        cout << "拷贝构造函数已调用" << endl;
    }

    Cmystring(Cmystring&& other) noexcept {
        this->m_ilen = other.m_ilen;
        this->p_buffer = nullptr;
        cout << "移动拷贝构造函数已调用" << endl;
    }

    int test() { return 100; }
};

Cmystring get() {
    Cmystring a("hello");
    return a;
}

int main()
{
    //float n = 6;
    //float& lr_n = n;
    //float&& rr_n = n*n;
    //cout << lr_n << endl;
    //cout << rr_n << endl;
    //cout << &lr_n << endl;
    //cout << &n << endl;
    //cout << &rr_n;

   // int ret = foo(10); //	“int foo(int&)”: 无法将参数 1 从“int”转换为“int & ”  无法将右值转化为左值引用
    

   // const char * s_point = "this is a string";
    Cmystring op(Cmystring("hello world"));

    /*Cmystring("hello world");
    cout << 1;*/


    //Cmystring  op("hello world");
   // Cmystring  op1(op);
    cout << op.m_ilen<<endl;
   
   //cout << op.p_buffer<<endl;




   // cout << get().test();



   // Cmystring op1=op;
    //cout << op1.m_ilen;


    return 0;
  }

