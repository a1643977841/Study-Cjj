//
// Created by ahao on 2022/7/16.
// 基类中的成员是私有成员时的访问方式
//
#include <iostream>
using namespace std;
class BaseClass {
    int v1,v2;
    public:
        void setValue(int m, int n) {
            v1 = m;
            v2 = n;
        }
        void printValue();
};
void BaseClass::printValue() {
    cout << "v1= \t" << v1 << "\tv2 = " << v2 << endl;
}

class DerivedClass:public BaseClass {
    int v3;
    public:
        void setValue(int m, int n, int k) {
            BaseClass::setValue(m,n);// 通过基类的公有成员函数访问其私有成员变量
            v3 = k;
        }
        void printValue();
};

void DerivedClass::printValue() {
    cout << endl;
    BaseClass::printValue();
    cout << "v3=\t" << v3 << endl;
}
int main() {
    BaseClass baseClass;
    DerivedClass derivedClass;
    cout << "初始化随机值 :" << endl;
    baseClass.printValue();
    derivedClass.printValue();
    cout << "修改基类中的值后" << endl;
    baseClass.setValue(10, 20);
    baseClass.printValue();
    derivedClass.printValue();
    cout << "从派生类修改从基类继承的值及本类得值" << endl;
    derivedClass.setValue(100, 200, 300);
    baseClass.printValue();
    derivedClass.printValue();
    return 0;
}
