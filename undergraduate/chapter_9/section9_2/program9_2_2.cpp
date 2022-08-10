//
// Created by ahao on 2022/7/17.
// 类模板
//
#include <iostream>
using namespace std;
template<class T>
class TestClass{
public:
    T buffer[10];
    T getData(int i);
};

template<class T>
T TestClass<T>::getData(int i) {
    return *(buffer + i);
}
int main() {
    TestClass<char> classInstA;
    int i;
    char cArr[6] = "abcde";
    for (i = 0; i < 5; i ++) {
        classInstA.buffer[i] = cArr[i];
    }
    for (i = 0; i < 5; i ++) {
        char res = classInstA.getData(i);
        cout << res << "  ";
    }
    cout << endl;
    TestClass<double> classInstF;
    double fArr[6] = {12.1, 23.2, 34.3, 45.4, 56.5, 67.6};
    for (i = 0; i < 6; i ++) {
        classInstF.buffer[i] = fArr[i];
    }
    for (i = 0; i < 6; i ++) {
        double res = classInstF.getData(i);
        cout << res << "  ";
    }
    cout << endl;
    return 0;
}
