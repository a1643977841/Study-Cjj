
//
// Created by ahao on 2022/7/17.
// 赋值运算符的重载及使用
//
#include <iostream>
using namespace std;
class CBase {
public:
    CBase(){};
    CBase(CBase &c){
        cout << "CBase复制构造函数" << endl;
    }
    CBase & operator = (const CBase &b) {
        cout << "CBase::operator = " << endl;
        return *this;
    }
};
class CDerived:public CBase {
public:
    CDerived() {
        cout << "CDerived::复制构造函数" << endl;
    }
};

int main() {
    CDerived d1, d2;
    CDerived d3(d1);
    d2 = d1;
    return 0;
}
