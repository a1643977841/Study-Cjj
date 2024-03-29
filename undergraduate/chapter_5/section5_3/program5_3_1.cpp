//
// Created by ahao on 2022/7/17.
// 基类和派生类的构造函数和析构函数
//
#include <iostream>
using namespace std;
class BaseClass {
protected:
    int v1, v2;
public:
    BaseClass();
    BaseClass(int, int);
    ~BaseClass();
};
BaseClass::BaseClass() {
    cout << "BaseClass 无参构造函数" << endl;
}
BaseClass::BaseClass(int m, int n) {
    v1 = m;
    v2 = n;
    cout << "BaseClass 2个参数构造函数" << endl;
}
BaseClass::~BaseClass() {
    cout << "BaseClass 析构函数" << endl;
}
class DerivedClass:public BaseClass {
    int v3;
public:
    DerivedClass();
    DerivedClass(int);
    DerivedClass(int, int, int);
    ~DerivedClass();
};
DerivedClass::DerivedClass() {
    cout << "DerivedClass 无参构造函数" << endl;
}
DerivedClass::DerivedClass(int k):v3(k) {
    cout << "DerivedClass 1个参数构造函数" << endl;
}
DerivedClass::DerivedClass(int m, int n, int k):BaseClass(m, n),v3(k) {
    cout << "DerivedClass 3个参数构造函数" << endl;
}
DerivedClass::~DerivedClass() {
    cout << "DerivedClass 析构函数" << endl;
}
int main() {
    cout << "无参对象的创建" << endl;
    BaseClass baseClass;
    DerivedClass derivedClass;
    cout << "带参数对象的创建" << endl;
    BaseClass baseClass1(10, 20);
    DerivedClass derivedClass1(30);
    return 0;
}