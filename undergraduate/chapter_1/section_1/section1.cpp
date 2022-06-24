//
// Created by ahao on 2022/6/24.
//  标准的输入输出
//
#include <iostream>
using namespace std; // 命名空间
int main(int argc, const char * argv[]) {
    int oneInt1, oneInt2;
    char  strArray[20];
    string str;
    double oneDouble;
    char oneChar = 'a';
    cout << "输入两个整数，一个字符，和一个字符串和一个浮点数，";
    cout << "以空格、Tab键或(Enter)键分割;" << endl;
    cin >> oneInt1 >> oneInt2 >> oneChar >> strArray >> oneDouble;
    str = strArray;
    cout << "输出的数据是：" << endl;
    cout << "字符串是 ：\t\t" << str << endl // endl的作用是换行
         << "两个整数值是：\t\t" << oneInt1 << "和\t" << oneInt2 << endl
         << "字符是： \t\t" << oneChar << "\n"
         << "浮点值是： \t\t" << oneDouble << endl;
    return 0;
}
