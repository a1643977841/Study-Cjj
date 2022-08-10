//
// Created by ahao on 2022/7/17.
// 类模板中使用静态成员
//
#include<iostream>
using namespace std;
template <typename T>
class Test{
public:
    Test(T num) {
        k += num;
    }
    Test() {
        k += 1;
    }
    static void incrementK() {
        k += 1;
    }
    static T k;
};
template <typename T>
T Test<T>::k = 0; // 静态成员变量初始化
int main() {
    Test<int> a;
    Test<double> b(4);
    cout << "Test<int>  k = " << a.k << endl;
    cout << "Test<double>  B = " << b.k << endl;

    Test<int> v;
    Test<double> m;
    cout << "Test<int>  k = " << Test<int>:: k << endl;
    cout << "Test<double>  B = " << Test<double>:: k << endl;
    Test<int>:: incrementK();
    cout << "调用 Test<int>:: incrementK();" << Test<int>::k << endl;
    Test<double>:: incrementK();
    cout << "调用  Test<double>:: incrementK();" << Test<double>::k << endl;
    return 0;
}

