//
// Created by ahao on 2022/7/17.
// 使用cout()函数
//
#include <iostream>
using namespace std;
int main() {
    char c = 'a', str[80] = "0123456789abcdefghijklmnopqrstuvwxyz";
    int x = 65;
    cout << "cout.put('a');"; cout.put('a');
    cout << "\ncout.put(c + 25);"; cout.put(c + 25);
    cout << "\ncout.put(x);"; cout.put(x);
    cout << "\ncout.write(str,20);"; cout.write(str, 20);// 将str的前20个字节写入到输出流中
    return 0;
}