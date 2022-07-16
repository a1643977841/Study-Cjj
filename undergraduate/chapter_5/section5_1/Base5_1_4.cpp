//
// Created by ahao on 2022/7/16.
// 访问基类和派生类成员的方式
//
#include <iostream>
using namespace std;
class CB {
    public:
        int a;
        CB(int x) {
            a = x;
        }
        void showA() {
            cout << "Class CB ---> a = " << a << endl;
        }
};
class CD: public CB {
    public:
        int a;
        CD(int x, int y): CB(x) {
            a = y;
        }
        void showA() {
            cout << "Class CD ---> a = " << a << endl;
        }
        void print2A() {
            cout << "a = " << a << endl;
            cout << "CB::a = " << CB::a << endl;
        }
};
int main() {
    CB CBobj(12);
    CBobj.showA();
    CD CDobj(48,999);
    CDobj.showA();// 访问派生类的showA()
    CDobj.CB::showA();// 访问基类的showA()
    cout << CDobj.a << endl;
    cout << CDobj.CB::a << endl;
    return 0;
}