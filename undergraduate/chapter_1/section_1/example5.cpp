//
// Created by ahao on 2022/6/24.
// 对引用进行初始化
//
#include "iostream"
using namespace std;
int main() {
    const int cInt = 50;
    int oneInt = 50;
    int & ref = oneInt; // T& <-- T
    const int & rc1 = cInt; // CT&<--CT, CT&表示类型T的常引用
    const int & rc2 = oneInt; // CT& <-- T
    const int & rc3 = ref; // CT& <-- T&
    int dInt = ref; // T <-- T&
    int eInt = cInt; // T <-- CT, CT表示常量类型
    int fInt = rc1; // T <-- T&
    const int gInt = oneInt; // CT <-- T
    int &ref1 = ref; // T& <-- T&
    const int hInt = ref; //CT <-- T&
    const int jInt = cInt; // CT <-- CT
    const int &mInt = rc1; // CT& <-- CT&
    const int nInt = rc2; // CT <-- CT&
    cout << "OK" << endl;
    int & r2 = (int &)rc1; // T& <-- CT& 强制类型转换
    int & r3 = (int &) cInt; // T& <-- CT 强制类型转换
    return 0;
}