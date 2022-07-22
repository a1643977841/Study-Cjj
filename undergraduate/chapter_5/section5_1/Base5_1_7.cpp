//
// Created by ahao on 2022/7/16.
// 基类中保护成员的访问方式
//
#include <iostream>
using namespace std;
class BaseClass {
protected:
    int v1,v2;
public:
    void setValue(int m, int n) {
        v1 = m;
        v2 = n;
    }
    void printValue();
};
void BaseClass::printValue() {
    cout << "v1=" << v1 << "\tv2 = " << v2;
}

class DerivedClass:public BaseClass {
    int v3;
public:
    void setValue(int m, int n, int k) {
        // 直接访问基类中的保护成员变量
        v1 = m;
        v2 = n;
        v3 = k;
    }
    void setValue(int m, int n) {
        // 直接访问基类中的保护成员变量
        v1 = m;
        v2 = n;
    }
    void printValue();
};

void DerivedClass::printValue() {
    cout << endl;
    BaseClass::printValue();
    cout << "\tv3=" << v3 << endl;
}
int main() {
    BaseClass baseClass;
    DerivedClass derivedClass;
    cout << "初始化随机值 :" << endl;
    baseClass.printValue();
    derivedClass.printValue();
    cout << "从派生类修改从基类继承的值后" << endl;
    derivedClass.setValue(10, 20);
    baseClass.printValue();
    derivedClass.printValue();
    cout << "从派生类修改从基类继承的值及本类得值" << endl;
    derivedClass.setValue(100, 200, 300);
    baseClass.printValue();
    derivedClass.printValue();
    return 0;
}
