//
// Created by ahao on 2022/7/1.
// 友元函数的声明
//
#include <iostream>
#include <cmath>
using namespace std;
class Pixel; // 前向引用声明
class Test {
    public:
        void printX(Pixel p);
};
class Pixel {
    private:
        int x, y;
    public:
        Pixel(int x0, int y0) {
            x = x0;
            y = y0;
        }
        void printXy() {
            cout << "pixel:(" << x << "," << y << ")" << endl;
        }
        friend double getDist(Pixel p1, Pixel p2); // 友元函数全局函数
        friend void Test::printX(Pixel p);// 类Test的成员函数 为本类的友元函数
};
void Test::printX(Pixel p) {
    cout << "x = " << p.x << "\t y = " << p.y << endl;
}
double getDist(Pixel p1, Pixel p2) {
    double xd = double (p1.x - p2.x);
    double yd = double(p1.y - p2.y);
    return sqrt(xd * xd + yd * yd);
}

int main() {
    Pixel p1(0, 0), p2(10, 10);
    p1.printXy();
    p2.printXy();
    cout << ("p1和p2之间的距离") << getDist(p1, p2);
    Test t;
    cout << "从友元函数中输出" << endl;
    t.printX(p1),
    t.printX(p2);
    return 0;
}