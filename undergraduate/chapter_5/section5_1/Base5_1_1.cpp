//
// Created by ahao on 2022/7/4.
// 派生类改变基类成员的访问权限(p179)
//
#include <iostream>
using namespace std;
class BaseClass{
    public:
        int v1, v2;
        BaseClass() {
            v1 = 1;
            v2 = 1;
        }
        int temp() {}
};

class DerivedClass :public BaseClass {
    int v1;
    int temp() {}
    public:
        DerivedClass() {
            v1 = 10;
        }
        void print() {
            cout << "v1 = " << v1 << endl;
            cout << "Base.v1 = " << BaseClass::v1 << endl;
        }
};

int main() {
    BaseClass bc;
    DerivedClass dc;
    dc.print();
    return 0;
}
