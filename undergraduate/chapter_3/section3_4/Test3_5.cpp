//
// Created by ahao on 2022/6/29.
// 变量生存期和作用域
//
#include <iostream>
using namespace std;
int main() {
    int i = 10;
    char ch = '2';
    cout << "在外层块：-i = " << i << ", \tch = " << ch << endl;
    {
        if (i > 0) {
            double i = 30.3;
            int ch = 33;
            cout << "在内层块：-i = " << i << ", \tch = " << ch << endl;
        }
        cout << "在外层块：-i = " << i << ", \tch = " << ch << endl;
    }
    cout << "在main中：-i = " << i << ", \tch = " << ch << endl;
    return 0;
}

