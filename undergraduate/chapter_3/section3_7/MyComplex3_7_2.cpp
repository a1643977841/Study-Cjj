//
// Created by ahao on 2022/7/2.
// 类成员函数实现复数类操作
//
#include <iostream>
using namespace std;
class MyComplex {
    private:
        double real, imag; // 复数的实部和虚部
    public:
        MyComplex();
        MyComplex(double r, double i);
        MyComplex addCom(MyComplex c); // 成员函数，调用者对象与参数对象c相加
        void outCom(); // 成员函数，输出调用者对象的有关数据
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
int main() {
    MyComplex c1(1, 2), c2(3,4), res;
    res = c1.addCom(c2); // 调用成员函数
    c1.outCom();
    cout << " + ";
    c2.outCom();
    cout << " = ";
    res.outCom();
    cout << endl;
    return 0;
}
