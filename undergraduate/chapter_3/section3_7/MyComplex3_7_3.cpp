//
// Created by ahao on 2022/7/2.
// 友元函数实现复数类操作
//
#include <iostream>
using namespace std;
class MyComplex {
private:
    double real, imag; // 复数的实部和虚部
public:
    MyComplex();
    MyComplex(double r, double i);
    friend MyComplex addCom(MyComplex c1, MyComplex c2); // 友元函数，调用者对象与参数对象c相加
    friend void outCom(MyComplex c); // 友元函数，输出调用者对象的有关数据
};
MyComplex::MyComplex() {
    real = 0;
    imag = 0;
}
MyComplex::MyComplex(double r, double i) {
    real = r;
    imag = i;
}
MyComplex addCom(MyComplex c1, MyComplex c2) {
    return MyComplex(c1.real + c2.real, c1.imag + c2.imag);
}
void outCom(MyComplex c) {
    cout << "(" << c.real << "," << c.imag << ")";
}
int main() {
    MyComplex c1(1, 2), c2(3,4), res;
    res = addCom(c1, c2); // 调用成员函数
    outCom(c1);
    cout << " + ";
    outCom(c2);
    cout << " = ";
    outCom(res);
    cout << endl;
    return 0;
}
