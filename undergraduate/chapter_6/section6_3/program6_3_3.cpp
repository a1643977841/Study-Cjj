//
// Created by ahao on 2022/7/17.
// 多态与非多态的对比
//
#include <iostream>
using namespace std;
class A {
public:
    void func1() {
        cout << "A:func1()" << endl;
    }
    virtual void func2() {
        cout << "A:func2()" << endl;
    }
};
class B: public A {
public:
    virtual void func1() {
        cout << "B:func1()" << endl;
    }
    void func2() {
        cout << "B:func2()" << endl; // 自动成为虚函数
    }
};
class C: public B {
public:
    void func1() {
        cout << "C:func1()" << endl; // 自动成为虚函数
    }
    void func2() {
        cout << "C:func2()" << endl; // 自动成为虚函数
    }
};
int main() {
    C obj;
    A *pa = &obj;
    B *pb = &obj;
    pa-> func2(); // 多态
    pa-> func1(); // 不是多态
    pb-> func1(); // 多态
    return 0;
}