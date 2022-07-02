//
// Created by ahao on 2022/6/29.
// 变量生存期和作用域2
//
#include <iostream>
using namespace std;
int x = 11;
char ch = '1';
void fun1(int ipara1);
void fun2() {
    int i = 22222;
    double ch = 202.2;
    cout << "在fun2中 -x = " << x << ",\tch = " << ch << ",\t -i = " << i << endl;
}
int main() {
    cout << "在main中 -x = " << x << ",\tch = " << ch << endl;
    fun1(x);
    fun2();
}
void fun1(int ii) {
    int i = 21111;
    int x = 201;
    cout << "在fun1中 -ii = " << ii << ", \t x= " << x << ",\t ch = " << ch << ", \t i = " << i << endl;
}

