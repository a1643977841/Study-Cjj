//
// Created by ahao on 2022/7/2.
// 重载赋值运算符
//
#include <iostream>
using namespace std;
class MyComplex {
    private:
        double real, imag;
    public:
        MyComplex();
        MyComplex(double r, double i);
        ~MyComplex() {};
        MyComplex addCom(MyComplex c1);
        void outCom();
        void outCom(string s);
        void changeReal(double r);
        friend MyComplex operator+(const MyComplex &c1, const MyComplex &c2);
        friend MyComplex operator+(const MyComplex &c1, double r);
        friend MyComplex operator+(double r, const MyComplex &c1);
        friend MyComplex operator-(const MyComplex &c1, const MyComplex &c2);
        friend MyComplex operator-(const MyComplex &c, double r);
        friend MyComplex operator-(double r, const MyComplex &c);
        MyComplex &operator=(const MyComplex &c);
        MyComplex &operator=(double);
};
MyComplex::MyComplex() {
    real = 0;
    imag = 0;
}
MyComplex::MyComplex(double r, double i) {
    real = r;
    imag = i;
}
MyComplex MyComplex::addCom(MyComplex c) {
    return MyComplex(real + c.real, imag + c.imag);
}
void MyComplex::outCom() {
    cout << "(" << real << "," << imag << ")";
}
void MyComplex::outCom(string s) {
    cout << s << "(" << real << "," << imag << ")" << endl;
}

MyComplex operator-(const MyComplex &c1, const MyComplex &c2) {
    return MyComplex(c1.real - c2.real, c1.imag - c2.imag); // 返回一个临时对象
}
MyComplex operator+(const MyComplex &c1, double r) {
    return MyComplex(c1.real + r, c1.imag + r);
}
MyComplex operator+(double r, const MyComplex &c1) {
    return MyComplex(c1.real + r, c1.imag + r);
}
MyComplex operator+(const MyComplex &c1, const MyComplex &c2) {
    return MyComplex(c1.real + c2.real, c1.imag + c2.imag); // 返回一个临时对象
}
MyComplex operator-(const MyComplex &c1, double r) {
    return MyComplex(c1.real - r, c1.imag - r); // 返回一个临时对象
}
MyComplex operator-(double r, const MyComplex &c1) {
    return MyComplex(r - c1.real, -c1.imag); // 返回一个临时对象
}
void MyComplex::changeReal(double r) {
    this -> real = r;
}
MyComplex &MyComplex::operator=(const MyComplex &c) {
    this -> real = c.real;
    this -> imag = c.imag;
    return *this;
}

MyComplex &MyComplex::operator=(double r) {
    this -> real = r;
    this -> imag = r;
    return *this;
}



int main() {
    MyComplex c1(1, 2), c2(3, 4), res;
    c1.outCom("\t\t\tc1");
    c2.outCom("\t\t\tc2");
    res = c1 + c2;
    res.outCom("执行 res = c1 + c2 --> \tres");
    res = c1.addCom(c2);
    res.outCom("执行 res = c1.addCom(c2) --> \tres");
    res = c1 + 5;
    res.outCom("执行res = c1 + 5 --> \t res");
    res = 5 + c1;
    res.outCom("执行res = 5 + c1 --> \t res");
    res = c1;
    c1.outCom("\t\t\t c1");
    res.outCom("执行res = c1 --> \t\t\t ");
    c1.changeReal(-3);
    c1.outCom("执行 c1.changeReal(-3) --> \t1");
    res.outCom("\t\t\res");
    res = c1;
    res.outCom("执行 res = c1 --> \t\tes");
    res = 7;
    res.outCom("执行 res = 7 --> \t\tes");
    res = 7 + 8;
    res.outCom("执行res = (7 + 8)");
    res = c1 = c2;
    c1.outCom("\t\t\tc1");
    c2.outCom("\t\t\tc2");
    res.outCom("执行 res = c1 = c2 --> \tr es");
    return 0;
}