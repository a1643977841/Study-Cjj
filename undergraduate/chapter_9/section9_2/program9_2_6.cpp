//
// Created by ahao on 2022/7/17.
// 普通类继承模板类
//
#include <iostream>
using namespace std;
template <class T>
class TBase {
    T data;
public:
    void print() {
        cout << "data = " << data << endl;
    }
};
class Derived: public TBase<int>{

};
int main () {
    Derived d;
    d.print();
    return 0;
}