//
// Created by ahao on 2022/7/17.
// 基类引用实现多态
//
#include <iostream>
using namespace std;
class A {
public:
    virtual void print() {
        cout << "A::print" << endl;
    }
};
class B: public A {
    virtual void print() {
        cout << "B::print" << endl;
    }
};
void printInfo(A &r) {
    r.print();
}
int main() {
    A a;
    B b;
    printInfo(a);
    printInfo(b);
    return 0;
}