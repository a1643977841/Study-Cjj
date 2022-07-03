//
// Created by ahao on 2022/7/2.
// 重载强制类型转换运算符double
//
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class MyComplex {
    private:
        double real, imag;
    public:
        MyComplex():real(0), imag(0) {}
        MyComplex(double r, double i):real(r), imag(i){}
        operator double () {
            return real;
        }
};
int main() {
    MyComplex c(1.2, -3.4);
    cout << double (c) << endl; // 输出1.2

    return 0;
}

