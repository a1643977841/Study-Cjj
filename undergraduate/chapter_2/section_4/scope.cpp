//
// Created by ahao on 2022/6/25.
// 作用域的隐藏规则
//
#include <iostream>
using namespace std;
int main() {
    int a = 1;
    cout << "a = " << a << endl;
    for (int i = 1; i < 2 ; i ++) {
        int a = 2;
        cout << "a = " << a << endl;
    }
}
