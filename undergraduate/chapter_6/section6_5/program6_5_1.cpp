//
// Created by ahao on 2022/7/17.
// 抽象类示例
//
#include <iostream>
using namespace std;
class A {
private:
    int a;
public:
    virtual void print() = 0;
    void func1() {
        cout << "func1()" << endl;
    }
};
class B: public A {
public:
    void print();
    void func1() {
        cout << "B:func1()" << endl;
    }
};
void B::print() {
    cout << "B:print()" << endl;
}
int main() {
    //A a; // 错误，抽象类不能被实例化
    //A *p = new A; // 错误，不能创建类A的实例
    //A b[2]; // 错误，不能声明抽象类的数组
    A *pa;
    A *pb = new B;
    pb-> print();
    B b;
    A *pc = &b;
    pc-> func1(); // 因为不是虚函数，所以调用的是类A中的func1
    return 0;
}