//
// Created by ahao on 2022/6/24.
// 定义带默认值的函数
//
#include "iostream"
using namespace std;
void func(int a = 11, int b = 22, int c = 33)
{
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << endl;
}

int main() {
    func();
    func(55);
    func(77, 99);
    func(8, 88, 888);
    return 0;
}
