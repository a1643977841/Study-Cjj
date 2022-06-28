//
// Created by ahao on 2022/6/28.
// 析构函数 p107程序填充
//
#include <iostream>
using namespace std;
class Samp {
    public:
        void setIJ(int a, int b) {
            i = a;
            j = b;
        }
        ~Samp() {
            cout << "析构函数" << endl;
        }
        int getMutI() const {
            return i * j;
        }
    protected:
        int i, j;
};

int main() {
    Samp *p;
    p = new Samp[5];
    for (int i = 0; i < 5; ++i)
        p[i].setIJ(i, i);
    for (int i = 0; i < 5; ++i)
        cout << "muti[" << i << "]值是: " << p[i].getMutI() << endl;
    delete []p;
    return 0;
}