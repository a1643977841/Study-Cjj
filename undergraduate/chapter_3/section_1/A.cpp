//
// Created by ahao on 2022/6/27.
// 简单的构造函数和析构函数
//
#include <iostream>
using namespace std;
class A {
    int a, b;
    public :
        A(int k =4, int j = 0) {
            a = 4;
            b = j;
        }
        ~A(); // 析构函数
        void show() const;

};

void A::show() const {
    cout << "a=" << a << ",b=" << b << endl;
}
A::~A() {
    cout << "调用析构函数...." << endl;
}

int main() {
    A *p = new A(1); // 生成对象时，自动调用构造函数
    p -> show();
    p -> ~A(); // 调用析构函数
    delete p; // 对象在销毁时会自动调用析构函数
    return 0;
}
