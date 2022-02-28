// using.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

void myfun() {
    cout << "myfun" << endl;
}

int main(int argc,char * argv[])
{
    auto fun = myfun;
    void (*pfun)() = myfun;
    pfun();
    cout << typeid(myfun).name()<< endl;
    //void(__cdecl*)(void)
    std::move(fun);

    return 0;
}


