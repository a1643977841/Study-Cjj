//
// Created by ahao on 2022/7/17.
// 在成员函数中调用虚函数
//
#include <iostream>
using namespace std;
class CBase {
public:
    void func1() {
        cout << "CBase::func1()" << endl;
        func2();
        func3();
    }
    virtual void func2() {
        cout << "CBase::func2()" << endl;
    }
    void func3() {
        cout << "CBase::func3()" << endl;
    }
};
class CDerived: public CBase {
public:
    virtual void func2() {
        cout << "CDerived::func2()" << endl;
    }
    void func3() {
        cout << "CDerived::func3()" << endl;
    }
};
int main() {
    CDerived d;
    d.func1();
    return 0;
}
