//
// Created by ahao on 2022/7/17.
// 调用基类和派生类的构造函数、析构函数、成员函数
//
#include <iostream>
using namespace std;
class Base {
private:
    int y;
public:
    Base(int y = 0) {
        this-> y = y;
        cout << "Base(" << y << ")" << endl;
    }
    ~Base(){
        cout << "~Base()" << endl;
    }
    void print() {
        cout << y << "";
    }
};
class Derived:public Base {
private:
    int z;
public:
    Derived(int y, int z): Base(y) {
        this-> z = z;
        cout << "Derived(" << y << "," << z << ")" << endl;
    }
    ~Derived() {
        cout << "~Derived()" << endl;
    }
    void print() {
        Base::print();
        cout << z << endl;
    }
};

int main() {
    Derived d(10, 20);
    d.print();
    return 0;
}
