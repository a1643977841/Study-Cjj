
//
// Created by ahao on 2022/7/17.
// 使用流操纵符控制浮点数输出
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 1234567.89,y = 1.23456789;
    // 无格式控制时
    cout << "无格式控制：\t\t     1)x=(" << x << "),y(" << y << ")\n";
    // 保留五位有效数字
    cout << "保留五位有效数字：\t     2)x=(" << setprecision(5) << x << "),y=(" << y << ")\n";
    // 保留小数点后五位
    cout << "保留小数点后五位：\t     3)x=(" << fixed << setprecision(5) << x << "),y=(" << y << ")\n";
    //  科学计数，且保留小数点后五位
    cout << "科学计数，且保留小数点后五位：\t     4)x=(" << scientific << setprecision(5) << x << "),y=(" << y << ")\n";
    //  非负数显示正号，输出宽度为12字符，宽度不足时使用*填充
    cout << "5)" << showpos << fixed << setw(12) << setfill('*') << y << endl;
    //  非负数显示正号，输出宽度为12字符，宽度不足时右边用填充字符填充
    cout << "6)" << noshowpos << setw(12) << left << y << endl;
    //  输出宽度为12字符，宽度不足时左边用填充字符填充
    cout << "7)" << setw(12) << right << y << endl;
    //  宽度不足时，负号和数值分列左右，中间用填充字符
    cout << "8)" << setw(12) << internal << -y << endl;
    return 0;
}
