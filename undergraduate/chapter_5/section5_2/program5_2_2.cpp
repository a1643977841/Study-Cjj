//
// Created by ahao on 2022/7/17.
// 类型兼容规则的使用
//
#include <iostream>
using namespace std;
class A{
    int an;
public:
    A() {}
    A(int n) {
        an = n;
    }
};
class B: public A {
    int bn;
public:
    B(int n):A(2*n) {
        bn = n;
    }
};
int main() {
    A a(10);
    B b(20);
    a = b;
    return 0;
}
