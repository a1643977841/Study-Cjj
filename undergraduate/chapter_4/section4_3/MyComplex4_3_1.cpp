//
// Created by ahao on 2022/7/2.
// 流插入运算符和流提取运算符重载为友元
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
        friend ostream & operator << (ostream & os, MyComplex & c); // 友元插入
        friend istream & operator >> (istream & is, MyComplex & c); // 友元提取
};

ostream &operator<<(ostream &os, MyComplex &c) {
    if (c.imag >= 0)
        os << c.real << "+" << c.imag << "i"; // 以 a+bi的形式输出
    else
        os << c.real << "-" << (-c.imag) << "i";
    return os;
}

istream &operator>>(istream &is, MyComplex &c) {
    string s;
    is >> s; // 将a+bi作为字符串读入，a+bi中间不能有空格
    int pos = s.find('+', 0);// 查找虚部
    if (pos == -1) pos = s.find('-', 1); // 虚部为复数时候
    string sReal = s.substr(0, pos); // 分录出代表实部的字符串
    c.real = atof(sReal.c_str()); // atof()能将参数内容转为浮点数
    sReal = s.substr(pos, s.length() - pos - 1); // 分离出代表虚部的字符串
    c.imag = atof(sReal.c_str());
    return is;
}
int main() {
    MyComplex c, c1;
    int n;
    cout << "请输入两个复数([-]a±bi)和一个整书，以空格分隔" << endl;
    cin >> c >> c1 >> n;
    cout << c << "," << n << "," << c1;
    return 0;
}

