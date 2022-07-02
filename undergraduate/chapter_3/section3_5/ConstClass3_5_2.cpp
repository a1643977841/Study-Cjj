//
// Created by ahao on 2022/6/30.
// 常量成员变量及变量成员函数的使用(P121)
//
#include <iostream>
using namespace std;
class ConstClass {
    const int conMbr;
    int mbr;
public :
    ConstClass() : conMbr(0), mbr(200) {}
    ConstClass(int i) : conMbr(i) {
        mbr = 200;
    }
    void printConst() {
        cout << "conMbr = " << conMbr << ", Mbr = " << mbr << endl;
    }
    int getConst() {
        cout << "调用非常量函数" << endl;
        return conMbr;
    }
    int getConst() const {
        cout << "调用常量函数" << endl;
        return conMbr;
    }
    int getValue() {
        return mbr;
    }
    void processConst() {
        cout << "在processConst函数中 非常量 -- " << endl;
        int x = 2 * conMbr + 1;
        cout << "2 * conMbr + 1 = " << x << endl;
        mbr ++;
        cout << "mbr = " << mbr << endl;
    }
    void processConst() const {
        cout << "在processConst函数中 常量 -- " << endl;
        int x = conMbr + 1;
        cout << "conMbr + 1= " << x << endl;
        //conMbr ++; // 错误，不能更改常量成员conMbr的值
        // mbr ++;
        cout << "mbr = " << mbr << endl;
    }

};
int main() {
    ConstClass ob1(123), ob2;
    ob1.printConst();
    cout << "ob2.getConst() = " << ob2.getConst() << endl;
    ob2.processConst();
    const ConstClass ob3(20);
    cout << "ob3.getConst() = " << ob3.getConst() << endl;
    ob3.processConst();
    return 0;
}