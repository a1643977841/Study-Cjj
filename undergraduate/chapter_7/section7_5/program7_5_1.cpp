//
// Created by ahao on 2022/7/17.
// 采用EOF判断输入是否结束
//
#include <iostream>
using namespace std;
int main() {
    int n = 0;
    char ch;
    while ((ch = cin.get()) != EOF) {
        cout.put(ch);
        n ++;
    }
    cout << "输入字符共计:" << n << endl;
    return 0;
}