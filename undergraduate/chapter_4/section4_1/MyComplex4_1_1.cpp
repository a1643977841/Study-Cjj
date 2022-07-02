//
// Created by ahao on 2022/7/2.
// 为类重载运算符"+" 和 "-"
//
#include <iostream>
using namespace std;
class MyComplex {
    private:
        double real, imag;
    public:
        MyComplex(); // 构造函数
        MyComplex(double r, double i); // 构造函数
        void outCom(); // 成员函数
        MyComplex operator-(const MyComplex &c); // 成员函数
        friend MyComplex operator+(const MyComplex &c1, const MyComplex &c2); // 友元
};
MyComplex::MyComplex() {
    real = 0;
    imag = 0;
}
MyComplex::MyComplex(double r, double i) {
    real = r;
    imag = i;
}
void MyComplex::outCom() {
    cout << "(" << real << "," << imag << ")";
}
MyComplex MyComplex::operator-(const MyComplex &c) {
    return MyComplex(this -> real - c.real, this -> imag - c.imag); // 返回一个临时对象
}
MyComplex operator+(const MyComplex &c1, const MyComplex &c2) {
    return MyComplex(c1.real + c2.real, c1.imag + c2.imag);
}
int main() {
    MyComplex c1(1, 2), c2(3, 4), res;
    c1.outCom();
    cout << " operator+ ";
    c2.outCom();
    cout << " = ";
    res = c1 + c2;
    res.outCom();
    cout << endl;
    c1.outCom();
    cout << " operator-";
    c2.outCom();
    cout << " = ";
    res = c1 - c2;
    res.outCom();
    cout << endl;
}