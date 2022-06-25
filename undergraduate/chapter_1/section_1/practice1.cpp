//
// Created by ahao on 2022/6/25.
// 练习 P60
// 输入n个字符串保存在一个一维数组A中。在输入字符串之前，先输入n的值。
// 要求数组A需要动态申请空间，程序运行结束前再释放掉。
//
#include <iostream>
using namespace std;
int main() {
    cout << "请输入n：" << endl;
    int n;
    cin >> n;
    string *p = new string[n];
    for (int i = 0; i < n; ++i) {
        cout << "请输入第" << i + 1 << "个字符串" << endl;
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << p[i];
    }
    delete []p;
    return 0;
}