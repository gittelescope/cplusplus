// 9-2.cpp : 类模板。
//

#include <iostream>
#include <cstdlib>
using namespace std;

struct student {
    int id;
    float gpa;
};

template <class T>
class store {
private:
    T item;
    bool haveValue;//是否存入内容
public:
    store();
    T& getItem();  //提取数据函数
    void putElem(const T& x);   //存入数据函数
};

template<class T>
store<T>::store() :haveValue(false) {};

template<class T>
T& store<T>::getItem() {
    if (!haveValue) {
        cout << "No item present" << endl;
        exit(1);
    }

    return item;
}

template <class T>
void store<T>::putElem(const T& x) {
    haveValue = true;
    item = x;
}








int main()
{
    store<int>s1, s2;
    s1.putElem(3);
    s2.putElem(-7);
    cout << s1.getItem() << " " << s2.getItem() << endl;

    student g = { 1000,2.3 };
    store<student> s3;
    s3.putElem(g);
    cout << s3.getItem().id << endl;

}
