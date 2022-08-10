//
// Created by ahao on 2022/7/17.
// 使用普通参数的类模板
//
#include <iostream>
using namespace std;
template <int i>
class TestClass {
public:
    int buffer[i];
    int getData(int j);
};
template <int i>
int TestClass<i>::getData(int j) {
    return *(buffer + j);
}
int main() {
    int i;
    TestClass<6> classInstF;
    double fArr[6] = {12.1, 23.2, 34.3, 45.4, 56.5, 67.6};
    for (i = 0; i < 6; i ++) {
        classInstF.buffer[i] = fArr[i];
    }
    for (i = 0; i < 6; i ++) {
        double res = classInstF.getData(i);
        cout << res << "  ";
    }
    return 0;
}