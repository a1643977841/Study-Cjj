//
// Created by ahao on 2022/7/17.
// 从输入的字符串中提取电话号码
//
#include "iostream"
using namespace std;
int main() {
    char str[30];
    while (!cin.eof()){
        cin.ignore(10, ':'); // 在cin中跳过':'之前的全部字符
        if (!cin.eof()) {
            cin >> str;
            cout << str << endl;
        }
    }
    return 0;
}