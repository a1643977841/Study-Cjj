//
// Created by ahao on 2022/7/17.
// 将标准输出cout重定向到文件
//
#include <iostream>
using namespace std;
int main() {
    int x, count, sum = 0;
    freopen("G:\\MyWordkspace\\CjjStudy\\undergraduate\\chapter_7\\section7_2\\input.dat", "r", stdin); // 将标准输入重定向到文件input.data
    for (count = 0; count < 10; count ++) {
        cin >> x;
        sum += x;
    }
    cout << "前10个整数的平均值 = " << 1.0 * sum/10 << endl;
    return 0;
}