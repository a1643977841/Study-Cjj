//
// Created by ahao on 2022/6/29.
// 调用常量成员与普通成员函数(P119)
//
#include <iostream>
using namespace std;
class Simple{
public:
    Simple();
    void getValue() const;
    void getValue();
    void priValue();
    void priVcon() const;
};

void Simple::getValue() const {
    cout << "常量成员函数" << endl;
}

void Simple::getValue() {
    cout << "非常量成员函数" << endl;
}

void Simple::priValue() {
    cout << "非常量成员函数" << endl;
}

void Simple::priVcon() const {
    cout << "常量成员函数" << endl;
}

Simple::Simple() {

}

int main() {
    const Simple cono;
    Simple o;
    cout << "cono \t";
    cono.getValue(); // 通过常量对象可以调用常量成员函数
    cout << "o \t";
    o.priValue(); // 通过普通对象调用
    cout << "o \t";
    o.priVcon();
    return 0;
}


