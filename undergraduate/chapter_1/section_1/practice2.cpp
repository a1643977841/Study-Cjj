//
// Created by ahao on 2022/6/25.
// 再practice1的基础上，输出n个字符串中最长的和最短的字符，计算n个串的平均长度
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
    int sum = (int)p[0].length();
    int maxSize = p[0].length();
    int minSize = p[0].length();
    string maxStr = p[0];
    string minStr = p[0];
    for (int i = 1; i < n; ++i) {
        int itemStr = (int)p[i].length();
        if (itemStr > maxSize) {
            maxSize = p[i].length();
            maxStr = p[i];
        }
        if (itemStr < minSize) {
            minSize = p[i].length();
            minStr = p[i];
        }
        sum = sum + itemStr;
    }
    cout << (double)sum/n << endl;
    cout << "max = " << maxStr << endl;
    cout << "min = " << minStr << endl;
    delete []p;
    return 0;
}
