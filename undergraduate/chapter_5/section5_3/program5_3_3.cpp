//
// Created by ahao on 2022/7/17.
// 派生类中的复制构造函数
//
#include <iostream>
using namespace std;
class A {
private:
    int i;
public:
    A() {
        i = 100;
        cout << "类A默认构造函数" << endl;
    }
    A(const A &s) {
        i = s.i;
        cout << "类A复制构造函数" << endl;
    }
    int getValue();
    void setValue(int);
};

int A::getValue() {
    return i;
}

void A::setValue(int k) {
    i = k;
}
class B:public A {
private:
    float f;
public:
    B() {
        f = 20.1;
        cout << "类B默认构造函数" << endl;
    }
    B(const B &v) :A(v),f(v.f) {
        cout << "类B复制构造函数" << endl;
    }
    float getValue();
    int getValue1();
};

int B::getValue1() {
    return A::getValue();
}

float B::getValue() {
    return f;
}
int main() {
    A a;
    B b;
    B bb(b);
    return 0;
}


