// 6-16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cassert>
using namespace std;


class Point {
public:
    Point() :x(0), y(0) {
        cout << "默认构造器启动" << endl;
    }

    Point(int x, int y) :x(x), y(y) {
        cout << "构造器启动" << endl;
    }

    ~Point() { cout << "析构器启动" << endl; }

    int getX() const { return x; }
    int getY() const { return y; }

    void move(int newX, int newY) {
        x = newX;
        y = newY;
    }

private:
    int x, y;
};


class ArrayOfPoints {
public:
    ArrayOfPoints(int size) :size(size) {
        points = new Point[size];
      }

    ArrayOfPoints(const ArrayOfPoints& v);

    ~ArrayOfPoints() {
        cout << "动态数组析构器启动"<<endl;
        delete[] points;               //析构函数释放空间
    }

    Point& element(int index) {          //引用类型
        assert(index >= 0 && index < size);
        return points[index];
    }


private:
    Point* points;
    int size;

};

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v) {
    size = v.size;
    points = new Point[size];
    for (int i = 0; i < size; i++) {
        points[i] = v.points[i];
    }
}





int main(){
  //  cout << "Step 1" << endl;   
   // Point* ptr1 = new Point;     //动态创建对象，使用默认构造函数
   // delete ptr1;                 //删除对象，使用析构对象

   // cout << "Step 2" << endl;
   // ptr1 = new Point(1, 2);
   // delete ptr1;

   

    int count;
    cout << "请输入对象数组的数目";
    cin >> count;

    ArrayOfPoints arr1(count);          //创建对象数组
    arr1.element(0).move(5, 10);
    arr1.element(1).move(15, 20);

    ArrayOfPoints arr2 = arr1;           //创建对象数组副本
    cout << "arr1的复制：" << endl;
    cout << "point_0 of arr2" << arr2.element(0).getX() << ", " << arr2.element(0).getY() << endl;
    cout << "point_1 of arr2" << arr2.element(1).getX() << ", " << arr2.element(1).getY() << endl;

    arr1.element(0).move(25, 30);
    arr1.element(1).move(35, 40);

    cout << "更改arr1值后" << endl;
    cout << "point_0 of arr2" << arr2.element(0).getX() << ", " << arr2.element(0).getY() << endl;
    cout << "point_1 of arr2" << arr2.element(1).getX() << ", " << arr2.element(1).getY() << endl;


    return 0;

 }
