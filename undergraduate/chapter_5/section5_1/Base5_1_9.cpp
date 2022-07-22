//
// Created by ahao on 2022/7/16.
// 多重继承
//
#include <iostream>
using namespace std;
class BaseClass1 {
public:
    int v1, v2;
    BaseClass1();
    BaseClass1(int, int);
    ~BaseClass1();
};

BaseClass1::BaseClass1() {
    cout << "BaseClass1 无参构造函数" << endl;
}

BaseClass1::BaseClass1(int m, int n):v1(m), v2(n) {
    cout << "BaseClass1 带2个参数构造函数" << endl;
}

BaseClass1::~BaseClass1() {
    cout << "BaseClass1 析构函数" << endl;
}
class BaseClass2 {
public:
    int v1, v4;
    BaseClass2();
    BaseClass2(int, int);
    ~BaseClass2();
};

BaseClass2::BaseClass2() {
    cout << "BaseClass2 无参构造函数" << endl;
}

BaseClass2::BaseClass2(int m, int n):v1(m), v4(n) {
    cout << "BaseClass2 带2个参数构造函数" << endl;
}

BaseClass2::~BaseClass2() {
    cout << "BaseClass2 析构函数" << endl;
}
class DerivedClass:public BaseClass1, public BaseClass2 {
public:
    int v3;
public:
    DerivedClass();
    DerivedClass(int);
    DerivedClass(int, int, int, int);
    ~DerivedClass();
};
DerivedClass::DerivedClass() {
    cout << "DerivedClass 无参构造函数" << endl;
}
DerivedClass::DerivedClass(int k): v3(k) {
    cout << "DerivedClass 带1个参数构造函数" << endl;
}
DerivedClass::DerivedClass(int m, int n, int k, int t):BaseClass1(m, n),BaseClass2(m, t), v3(k) {
    cout << "DerivedClass 带4个参构造函数" << endl;
}
DerivedClass::~DerivedClass() {
    cout << "DerivedClass 析构函数" << endl;
}
int main() {
    cout << "带参数对象创建" << endl;
    DerivedClass derivedClass(1000, 2000, 3000, 4000);
    cout << "v1 = " << derivedClass.BaseClass1::v1 << endl;
    cout << "v2 = " << derivedClass.v2 << endl;
    cout << "v1 = " << derivedClass.BaseClass2::v1 << endl;
    cout << "v4 = " << derivedClass.v4 << endl;
    cout << "v3 = " << derivedClass.v3 << endl;
    return 0;
}