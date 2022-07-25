//
// Created by ahao on 2022/7/17.
// 不使用虚析构函数的情况
//
#include <iostream>
using namespace std;
class ABase {
public:
    ABase() {
        cout << "ABase 构造函数" << endl;
    }
    ~ABase() {
        cout << "ABase 析构函数" << endl;
    }
};
class Derived: public ABase {
public:
    int w,h;
    Derived() {
        cout << "Derived 构造函数" << endl;
    }
    ~Derived() {
        cout << "Derived 析构函数" << endl;
    }
};
int main() {
    ABase *p = new Derived();
    delete p;
    return 0;
}
