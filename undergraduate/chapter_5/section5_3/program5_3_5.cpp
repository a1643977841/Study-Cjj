
//
// Created by ahao on 2022/7/17.
// 多重继承
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
    void setValue(int,int);
    void printValue();
};
BaseClass1::BaseClass1():v1(0),v2(0) {
    cout << "BaseClass1 无参构造函数" << endl;
}
BaseClass1::BaseClass1(int m, int n) {
    v1 = m;
    v2 = n;
    cout << "BaseClass1 2个参数构造函数" << endl;
}
BaseClass1:: ~BaseClass1() {
    cout << "BaseClass1 析构函数" << endl;
}
void BaseClass1::setValue(int m, int n) {
    v1 = m;
    v2 = n;
}
void BaseClass1::printValue() {
    cout << "v1 = " << v1 << "\tv2 = " << v2 <<endl;
}


class BaseClass2 {
protected:
    int v1, v4;
public:
    BaseClass2();
    BaseClass2(int, int);
    ~BaseClass2();
    void setValue(int,int);
    void printValue();
};
BaseClass2::BaseClass2():v1(1),v4(1) {
    cout << "BaseClass2 无参构造函数" << endl;
}
BaseClass2::BaseClass2(int m, int n) {
    v1 = m;
    v4 = n;
    cout << "BaseClass2 2个参数构造函数" << endl;
}

void BaseClass2::setValue(int m, int n) {
    v1 = m;
    v4 = n;
}
BaseClass2::~BaseClass2(){
    cout << "BaseClass2 析构函数" << endl;
}
void BaseClass2::printValue() {
    cout << "v1 = " << v1 << "\tv4 = " << v4 <<endl;
}

class DerivedClass: public BaseClass1,public BaseClass2 {
public:
    int v3;
public:
    DerivedClass();
    DerivedClass(int);
    DerivedClass(int, int, int, int);
    ~DerivedClass();
    void setValue(int m, int n, int k, int h) {
        BaseClass1::setValue(m, n);
        BaseClass2::setValue(2*m, h);
        v3 = k;
    }
    void setValue(int m, int n, int k) {
        BaseClass1::setValue(m, n);
        BaseClass2::setValue(2*m, 2*n);
        v3 = k;
    }
    void setValue(int m, int n) {
        BaseClass1::setValue(m, n);
        BaseClass2::setValue(-1, -1);
        v3 = -1;
    }
    void printValue();
};
DerivedClass::DerivedClass() {
    cout << "DerivedClass 无参构造函数" << endl;
}
DerivedClass::DerivedClass(int k) {
    v3 = k;
    cout << "DerivedClass 1个参数构造函数" << endl;
}
DerivedClass::DerivedClass(int m, int n, int k, int t):BaseClass1(m, n), BaseClass2(m, t), v3(k) {
    cout << "DerivedClass 4个参数构造函数" << endl;
}
DerivedClass::~DerivedClass() {
    cout << "DerivedClass 析构函数" << endl;
}

void DerivedClass::printValue() {
    BaseClass1::printValue();
    cout << "\tv3 = " << v3 << endl;
    BaseClass2::printValue();
    cout << endl;
}
int main() {
    cout << "带参数对象的创建" << endl;
    DerivedClass derivedClass(1000, 2000, 3000, 4000);
    derivedClass.printValue();
    return 0;
}