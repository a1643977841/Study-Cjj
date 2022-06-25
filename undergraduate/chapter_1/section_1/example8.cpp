//
// Created by ahao on 2022/6/25.
// 常量说明示例
//
#include "iostream"
using namespace std;
int main() {
    int a1 = 3; // 普通变量 a1 = 5 是正确的
    const int a2 = a1; // 数据是常量的， a2 = 5是错误的
    int * a3 = &a1; // 普通指针指向普通变量， *a3 = 6是正确的
    const int * a4 = &a1; // 数据是常量的  普通指针*a4 = 5 是错误的
    int * const a5 = &a1; // 指针是常量的 不能修改指针 但*a5 = 10 是正确的
    int const * const a6 = &a1; // 数据是常量，指针也是常量
    const int * const a7 = &a2; // 数据是常量，指针也是常量
    return 0;
}