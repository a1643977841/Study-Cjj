//
// Created by ahao on 2022/6/24.
//  强制类型转换示例
//
#include <iostream>
using namespace std; // 命名空间
int main() {
    int a = 0;
    const int *p = &a; // 不能使用常量指针p修改a的值   引用a的地址
    const int ca = 30; // 被const修饰
    int *q;
    cout << "a的地址为：\t" << &a << "\ta的值为：\t" << a << endl;
    cout << "*p的指向地址为：" << p << "\t*p的值为：\t" << *p << endl;
    q = const_cast<int *>(p); // 去除常量q = p， 如果直接写q = p会报错
    *q = 20;
    cout << "a的地址为：\t" << &a << "\ta的值为：\t" << a << endl;
    cout << "*p的指向地址为：" << p << "\t*p的值为：\t" << *p << endl;
    cout << "*q的指向地址为：" << q << "\t*q的值为：\t" << *q << endl;
    cout << "分界线" << endl;
    p = &ca; // ca的值不能修改
    q = const_cast<int *>(p); // 去除常量p赋给q
    *q = 40; // *p=40报错
    cout << "ca的地址为：\t" << &ca << "\tca的值为：\t" << ca << endl;
    cout << "*p的指向地址为：" << p << "\t*p的值为：\t" << *p << endl;
    cout << "*q的指向地址为：" << q << "\t*q的值为：\t" << *q << endl;
    return 0;
}
