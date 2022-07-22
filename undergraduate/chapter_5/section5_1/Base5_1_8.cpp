//
// Created by ahao on 2022/7/16.
// 多重继承下的访问方式
//
#include <iostream>
using namespace std;
class CB1 {
public:
    int a;
    CB1(int x) {
        a = x;
    }
    void showA() {
        cout << "Class CB1 ====> a = " << a << endl;
    }
};

class CB2 {
public:
    int a;
    CB2(int x) {
        a = x;
    }
    void showA() {
        cout << "Class CB2 ====> a = " << a << endl;
    }
};
// 集成多个基类
class CD:public CB1, public CB2 {
public:
    int a;
    CD(int x, int y, int z): CB1(x), CB2(y) {
        // 与基类重名访问
        a = z;
    }
    void showA() {
        cout << "Class CD ====> a = " << a << endl;
    }
    void print3A() {
        cout << "Class CD ====> a = " << a << endl;
        // 添加作用域访问基类的a
        cout << "Class CB1 ====> a = " << CB1::a << endl;
        cout << "Class CB2 ====> a = " << CB2::a << endl;
    }
};
int main() {
    CB1 CB1Obj(11);
    CB1Obj.showA();
    CD CDObj(101, 202, 909);
    CDObj.showA(); // 调用派生类showA
    CDObj.CB1::showA();// 调用基类showA
    cout << "CDobj.a = " << CDObj.a << endl; // 访问派生类成员
    cout << "CDobj.CB2::a = " << CDObj.CB2::a << endl; // 访问基类CB2中的成员
    return 0;
}