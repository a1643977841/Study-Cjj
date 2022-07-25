//
// Created by ahao on 2022/7/17.
// 互包含的类
//
#include <iostream>
#include <string>
using namespace std;
class B;
class A {
public:
    int aInt;
    B *bPoint = NULL;
    void setValue(int v) {
        aInt = v;
    }
};
class B {
public:
    A aCla;
    int bInt;
    void setValue(int v) {
        bInt = v;
    }
};
int main() {
    A ca;
    B cb;
    ca.bPoint = &cb;
    cout << "ca.bPoint =" << ca.bPoint << endl;
    cout << "&cb =" << &cb << endl;
    cout << "ca.aInt =" << ca.aInt << endl;
    cout << "cb.aCla.aInt =" << cb.aCla.aInt << endl;
    cout << "cb.bInt =" << cb.bInt << endl;
    cout << "分界线" << endl;
    ca.setValue(10);
    cb.setValue(20);
    cb.aCla = ca;
    cout << "ca.bPoint =" << ca.bPoint << endl;
    cout << "ca.aInt =" << ca.aInt << endl;
    cout << "cb.aCla.aInt =" << cb.aCla.aInt << endl;
    cout << "cb.bInt =" << cb.bInt << endl;
    return 0;
}
