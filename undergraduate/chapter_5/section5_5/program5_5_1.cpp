//
// Created by ahao on 2022/7/17.
// 多级派生时构造函数的调用
//
#include <iostream>
using namespace std;
class BaseClass1 {
protected:
    int v1, v2;
public:
    BaseClass1();
    BaseClass1(int, int);
    ~BaseClass1();
};
BaseClass1::BaseClass1() {
    cout << "BaseClass1 无参构造函数" << endl;
}
BaseClass1::BaseClass1(int m, int n):v1(m), v2(n) {
    cout << "BaseClass1 2个参数构造函数" << endl;
}
BaseClass1::~BaseClass1() {
    cout << "BaseClass1 析构函数" << endl;
}
class BaseClass2:public BaseClass1 {
protected:
    int v3;
public:
    BaseClass2();
    BaseClass2(int);
    BaseClass2(int, int, int);
    ~BaseClass2();
};
BaseClass2::BaseClass2() {
    cout << "BaseClass2 无参构造函数" << endl;
}
BaseClass2::BaseClass2(int m):v3(m) {
    cout << "BaseClass2 1个参数构造函数" << endl;
}
BaseClass2::BaseClass2(int m, int n, int k): BaseClass1(m, n), v3(k) {
    cout << "BaseClass2 3个参数构造函数" << endl;
}
BaseClass2::~BaseClass2() {
    cout << "BaseClass2 析构函数" << endl;
}

class DerivedClass:public BaseClass2 {
protected:
    int v4;
public:
    DerivedClass();
    DerivedClass(int);
    DerivedClass(int, int, int, int);
    ~DerivedClass();
};
DerivedClass::DerivedClass() {
    cout << "DerivedClass 无参构造函数" << endl;
}
DerivedClass::DerivedClass(int m):v4(m) {
    cout << "DerivedClass 1个参数构造函数" << endl;
}
DerivedClass::DerivedClass(int m, int n, int k, int t): BaseClass2(m, n, k), v4(t) {
    cout << "DerivedClass 4个参数构造函数" << endl;
}
DerivedClass::~DerivedClass() {
    cout << "DerivedClass 析构函数" << endl;
}

int main() {
    cout << "无参对象创建" << endl;
    DerivedClass derivedClass;
    cout << "带参数对象创建" << endl;
    DerivedClass derivedClass1(1000,2000,3000,4000);
    return 0;
}
