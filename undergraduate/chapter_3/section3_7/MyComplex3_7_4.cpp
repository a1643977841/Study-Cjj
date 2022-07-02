//
// Created by ahao on 2022/7/2.
// 友元类
//
#include <iostream>
using namespace std;
class MyComplex {
    private:
        double real, imag;
    public:
        MyComplex();
        MyComplex(double r, double i);
        friend class Oper; // 友元类
};
MyComplex::MyComplex() {
    real = 0;
    imag = 0;
}
MyComplex::MyComplex(double r, double i) {
    real = r;
    imag = i;
}
class Oper {
    public:
        MyComplex addCom(MyComplex c1, MyComplex c2); // 成员函数
        void outCom(MyComplex c); // 成员函数
};
MyComplex Oper::addCom(MyComplex c1, MyComplex c2) {
    return MyComplex(c1.real + c2.real, c1.imag + c2.imag);
}
void Oper::outCom(MyComplex c) {
    cout << "(" << c.real << "," << c.imag << ")";
}
int main() {
    MyComplex c1(1, 2), c2(3,4), res;
    Oper o;
    res = o.addCom(c1, c2); // 调用成员函数
    o.outCom(c1);
    cout << " + ";
    o.outCom(c2);
    cout << " = ";
    o.outCom(res);
    cout << endl;
    return 0;
}
