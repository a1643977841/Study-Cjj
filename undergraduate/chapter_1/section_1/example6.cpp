//
// Created by ahao on 2022/6/24.
// 不同的参数传递方式
//
#include "iostream"
using namespace std;

void SwapValue(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout << "在SwapValue函数中：\t\ta=" << a << ",b=" << b << endl;
    cout << "在SwapValue函数中：\t\ta地址=" << &a << ",b地址=" << &b << endl;
    return;
}
void SwapRef(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout << "在SwapRef函数中：\t\ta=" << a << ",b=" << b << endl;
    cout << "在SwapRef函数中：\t\ta地址=" << &a << ",b地址=" << &b << endl;
    return;
}
int main() {
    int a = 10, b = 20;
    cout << "数据交换前：\t\ta = " << a << ",b=" << b << endl << endl;
    cout << "数据交换前：\t\ta地址=" << &a << ",b地址=" << &b << endl;
    SwapValue(a, b);
    cout << "调用SwapValue()函数后：\t\ta = " << a << ",b=" << b << endl << endl;
    a = 10;
    b = 20;
    SwapRef(a, b);
    cout << "调用SwapRef()函数后：\t\ta = " << a << ",b=" << b << endl << endl;
    return 0;
}