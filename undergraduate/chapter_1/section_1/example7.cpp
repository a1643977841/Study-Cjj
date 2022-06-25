//
// Created by ahao on 2022/6/25.
// 引用作为函数返回值
//
#include "iostream"
using namespace std;
int oneX = 10;
int oneY = 20;
int & refValue (int & x) {
    return x;
}
int  main() {
    refValue(oneX) = 30; // 返回值是引用可以作为左值使用
    cout << "oneX=" << oneX << endl;// 输出30
    refValue( oneY) = 40; // 返回值是引用的函数调用表达式，可以作为左值使用
    cout << "oneY=" << oneY << endl;// 输出40
    return 0;
}

