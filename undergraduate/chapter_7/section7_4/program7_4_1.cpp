//
// Created by ahao on 2022/7/17.
// 使用cout中的成员函数控制输出格式
//
#include <iostream>
using namespace std;
int main() {
    double values[] = {1.23, 20.3456, 300.4567, 4000.56789, 50000.1234567};
    cout.fill('*');
    for (int i = 0; i < sizeof(values)/ sizeof(double); i++) {
        cout << "values[" << i << "]=(";
        cout.width(10);
        cout << values[i] << ")" << endl;
    }
    cout.fill(' '); // 设置填充字符为空格
    for (int i = 0; i < sizeof(values)/ sizeof(double); i++) {
        cout << "values[" << i << "]=(";
        cout.width(10);
        cout.precision(i + 3);
        cout << values[i] << ")" << endl;
    }
    return 0;
}
