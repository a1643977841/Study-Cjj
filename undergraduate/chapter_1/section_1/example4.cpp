//
// Created by ahao on 2022/6/24.
// 引用的定义和使用
//
#include "iostream"
using namespace std;
int main() {
    int oneInt = 1;
    int & ref = oneInt; // ref是oneInt的引用，ref等价于oneInt
    const int & refc = oneInt; // 定义常引用
    ref = 2; // 修改ref也即修改了oneInt
    cout << "oneInt=" << oneInt << "," << "ref=" << ref << endl;
    cout << "refc=" << refc << endl;
    oneInt = 3;
    cout << "ref=" << ref << endl;
    cout << "refc=" << refc << endl;
    int & ref2 = ref; // ref2和ref都是oneInt的引用
    cout << "ref2=" << ref2 << endl;
    // refc = 5; // 错误，不能使用常引用对所引用的变量进行修改
    return 0;
}