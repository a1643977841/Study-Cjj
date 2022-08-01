//
// Created by ahao on 2022/7/17.
// 通过setw()控制输入格式
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string s1, s2;
    cin >> setw(5) >> s1 >> setw(3) >> s2;
    cout << "s1 = " << s1 << ", s2 = " << s2 <<endl;
    return 0;
}
