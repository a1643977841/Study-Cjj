//
// Created by ahao on 2022/7/17.
// 通过setiosflags()设置标志字进行格式控制
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 12.34;
    cout << "1)" << setiosflags(ios::scientific|ios::showpos) << x << endl;
    cout << "2)" << setiosflags(ios::fixed) << x << endl;
    cout << "3)" << setiosflags(ios::fixed) << setiosflags(ios::scientific|ios::showpos) << x << endl;
    cout << "4)" << resetiosflags(ios::showpos) << x << endl; // 清除要输出正号的标志
    return 0;
}