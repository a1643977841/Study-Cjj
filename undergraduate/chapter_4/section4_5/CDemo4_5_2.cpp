//
// Created by ahao on 2022/7/3.
// 自增、自减运算符重载为成员函数
//
#include <iostream>
using namespace std;
class CDemo {
private:
    int n;
public:
    CDemo(int i = 0): n(i) {}
    CDemo & operator++(); // 用于前置形式
    CDemo  operator++(int);// 用于后置形式
    operator int(){
        return n;
    }
    CDemo & operator--();
    CDemo operator--(int);
};

CDemo &CDemo::operator++() {
    n ++;
    return *this;
}

CDemo CDemo::operator++(int k) {
    CDemo temp(*this); // 记录修改前的对象
    n ++;
    return temp; // 返回修改前的对象
}

CDemo &CDemo::operator--() {
    n --;
    return *this;
}

CDemo CDemo::operator--(int k) {
    CDemo temp(*this);
    n --;
    return temp;
}
int main() {
    CDemo d(10);
    cout << (d++) << ", ",
            cout << d << ", ",
            cout << (++d) << ", ",
            cout << d << ", ",
            cout << (d--) << ", ",
            cout << d << ", ",
            cout << (--d) << ", ",
            cout << d << ", ";
    return 0;
}

