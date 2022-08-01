//
// Created by ahao on 2022/7/17.
// 将标准输入重定向为文件并判断文件状态
//
#include <iostream>
using namespace std;
int main() {
    int x, count, sum = 0;
    freopen(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_7\section7_2\input.dat)", "r", stdin); // 将标准输入重定向到文件input.data
    for (count = 0; count < 10; count ++) {
        cin >> x;
        if (cin.eof()) break; // 如果输入流已经结束则退出
        else sum += x;
    }
    cout << "前 "<< count+1 << "个整数的平均值 = " << 1.0 * sum/count << endl;
    return 0;
}