//
// Created by ahao on 2022/7/4.
// 派生类继承了友元函数
//
#include <iostream>
using namespace std;
class another;
class Base {
    private:
        float x;
    public:
        void print(const another &k);
};
class Derived :public Base {
    private:
        float y;
};
class another {
    private:
        int aaa;
    public:
        another() {
            aaa = 100;
        }
        friend void Base::print(const another &k);
};
void Base::print(const another &k) {
    cout << "Base:" << k.aaa << endl;
}

int main() {
    Base a;
    Derived d;
    another an;
    a.print(an);
    d.print(an);
}
