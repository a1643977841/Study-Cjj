//
// Created by ahao on 2022/6/29.
//  静态成员的使用(p111 程序3-4)
//
#include <iostream>
using namespace std;
class ClassA {
public:
    double x, y;
    static int num; //  公有静态成员变量--供所有对象共享 用于记录通过构造函数已生成多少个对象
    ClassA() {
        x = 0;
        y = 0;
        num ++;
    }
    ClassA(double x0, double y0) {
        x = x0;
        y = y0;
        num ++;
    }
    //  静态成员函数，输出成员num的当前值
    static void staticFun() {
        cout << "num = " << num << endl;
    }
};
int ClassA :: num = 0;
int main() {
    ClassA obj(1.2, 3.4), *p;
    ClassA::staticFun();
    ClassA A[4];
    p = new ClassA(2.2, 33.3);
    ClassA::staticFun();
}
