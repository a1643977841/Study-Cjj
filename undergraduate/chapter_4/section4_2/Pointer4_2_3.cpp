//
// Created by ahao on 2022/7/2.
// 深拷贝
//
#include <iostream>
using namespace std;
class Pointer {
public:
    int a;
    int * p;
    Pointer() {
        a = 100;
        p = new int(10);
    }
    // 复制构造函数
    Pointer(const Pointer &tempp){
        if (this != &tempp) {
            a = tempp.a;
            p = new int();
            * p = *tempp.p;
        }
    }
    ~Pointer() {
        if (p != NULL) delete p;
    }
    Pointer &operator= (const Pointer &c) {
        if (this == &c) return *this;
        delete this -> p;
        this -> p = new int(*c.p);
        return *this;
    }
};

int main() {
    Pointer p1;
    Pointer p2(p1); // 使用复制构造函数
    Pointer p3;
    p1 = p1;
    p3 = p1;
    cout << "\n 初始化后，各对象的值及内存地址" << endl;
    cout << "对象名\t 对象地址   a的值   p中的值   p指向的值    p的地址" << endl;
    cout << "p1:\t" << &p1 << ",  " << p1.a << ",   " << p1.p << ",    " << *p1.p << ",    " << &p1.p << endl;
    cout << "p1:\t" << &p2 << ",  " << p2.a << ",   " << p2.p << ",    " << *p2.p << ",    " << &p2.p << endl;
    cout << "p1:\t" << &p3 << ",  " << p3.a << ",   " << p3.p << ",    " << *p3.p << ",    " << &p3.p << endl;
    *p1.p = 20;
    p2.a = 300;
    cout << "\n 修改后，各个对象的值及其内存地址" << endl;
    cout << "对象名\t 对象地址   a的值   p中的值   p指向的值    p的地址" << endl;
    cout << "p1:\t" << &p1 << ",  " << p1.a << ",   " << p1.p << ",    " << *p1.p << ",    " << &p1.p << endl;
    cout << "p1:\t" << &p2 << ",  " << p2.a << ",   " << p2.p << ",    " << *p2.p << ",    " << &p2.p << endl;
    cout << "p1:\t" << &p3 << ",  " << p3.a << ",   " << p3.p << ",    " << *p3.p << ",    " << &p3.p << endl;
    return 0;
}
