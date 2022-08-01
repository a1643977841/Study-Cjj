//
// Created by ahao on 2022/7/17.
// 将从键盘输入的数据进行累加
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    char ch;
    int sum = 0, count = 0, x;
    cout << "请输入整数(按Ctrl+Z退出)" << endl;
    do {
        while (cin >> x) {
            sum += x;
            count ++;
        }
        cout << "确定要退出输入请按Q";
        cin.clear(); // 状态字清0，恢复流状态
        cin >> ch;
    } while(toupper(ch) != 'Q');
    cout << "sum = " << sum << ",count = " << count << endl;
    return 0;
}