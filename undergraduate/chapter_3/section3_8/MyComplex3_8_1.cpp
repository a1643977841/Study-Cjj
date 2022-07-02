//
// Created by ahao on 2022/7/2.
// this的使用
//
#include <iostream>
using namespace std;
class MyComplex {
    public:
        double real, imag;
        MyComplex():real(0), imag(0){};
        MyComplex(double, double);
        MyComplex addRealOne();
        MyComplex addImagOne();
        void outCom(); // 成员函数，输出调用者对象的有关数据
};
MyComplex::MyComplex(double real, double imag) {
    this -> real = real;
    this -> imag = imag;
}
MyComplex MyComplex::addImagOne() {
    this -> imag ++;
    return *this;
}
MyComplex MyComplex::addRealOne() {
    this -> real ++;
    return *this;
}
void MyComplex::outCom() {
    cout << "(" << real << "," << imag << ")";
}
int main() {
    MyComplex c1(1, 1), c2, c3;
    c1.outCom();
    c2.outCom();
    c3.outCom();
    cout << "分界线" << endl;
    c2 = c1.addRealOne();
    c1.outCom();
    c3 = c1.addImagOne();
    c2.outCom();
    c3.outCom();
    cout << endl;
    return 0;
}
