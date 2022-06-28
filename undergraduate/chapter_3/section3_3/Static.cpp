//
// Created by ahao on 2022/6/28.
// 自动变量和静态变量的定义和使用
//
#include <iostream>
using namespace std;
static int glos = 100; // 全局静态变量
void f() {
    int a = 1; // 局部自动变量
    static int fs = 1; // 静态局部变量fs，完成初始化
    cout << "再f中：a(自动) = " << a << "   fs(静态) = " << fs << "glos(静态) = " << glos << endl;
    a += 2;
    fs += 2;
    glos += 10;
    cout << "再f中：a(自动) = " << a << "   fs(静态) = " << fs << "glos(静态) = " << glos << endl;
}
int main() {
    static int ms = 10;
    for (int i = 1; i <= 3; i++) f();
    cout << "ms = " << ms << endl;
    cout << "glos = " << glos << endl;
    return 0;
}