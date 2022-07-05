//
// Created by ahao on 2022/7/4.
// 派生关系中的静态成员
//
#include <iostream>
using namespace std;
class another;
class Base {
    private:
        float x;
    public:
        static int stav;
        Base() {
            stav ++;
        }
};
class Derived :public Base {
    private:
        float y;
    public:
        Derived() {
            stav ++;
        }
};
int Base::stav = 0;

int main() {
    Base a;
    cout << a.stav << endl;
    Derived d;
    cout << d.stav << endl;
    return 0;
}
