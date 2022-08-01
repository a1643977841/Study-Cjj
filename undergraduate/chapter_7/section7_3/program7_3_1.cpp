//
// Created by ahao on 2022/7/17.
// 使用流操纵符控制整数输出
//
#include "iostream"
#include "iomanip"
using namespace std;
int main() {
    int n = 65535,m = 20;
    // 分别输出一个整数的十进制、十六进制和八进制表示
    cout << "1)" << n << "=" << hex << n << "=" << oct << n << endl;
    // 使用setbase分别输出一个整数的十进制、十六进制和八进制表示
    cout << "2)" << setbase(10) << m << "=" << setbase(16) << m << "=" << setbase(8) << m << endl;
    // 使用showbase和setbase分别输出一个整数的十进制、十六进制和八进制标识
    cout << "3)" << showbase;
    cout << setbase(10) << m << "=" << setbase(16) << m << "=" << setbase(8) << m << endl;
    return 0;
}
