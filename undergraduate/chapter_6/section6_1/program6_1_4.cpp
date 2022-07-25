//
// Created by ahao on 2022/7/17.
// 多态机制下对象存储控件的大小
//
#include <iostream>
using namespace std;
class A {
public:
    int i;
    virtual void func() {}
    virtual void func2() {}
};
class B: public A {
    int j;
    void func(){};
};
int main() {
    cout << sizeof (A) << "," << sizeof (B);
    return 0;
}