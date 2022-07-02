//
// Created by ahao on 2022/7/1.
// 封闭类的定义(P124)
//
#include <iostream>
using namespace std;
class CType {
    private:
        int radius;
        int width;
    public:
        CType():radius(16), width(185) {}// 构造
        CType(int r, int w) : radius(r), width(w) {} // 构造
        int getRadius() {
            return radius;
        }
        int getWidth() {
            return width;
        }
};
class CCar {
    private:
        int price;
        CType type;
    public:
        CCar();
        CCar(int p, int tr, int tw);
        int getPrice() {
            return price;
        }
        CType getCType() {
            return type;
        }
};
CCar::CCar() {
    price = 50010;
    CType();
}
CCar::CCar(int p, int tr, int tw):price(p), type(tr, tw) {}
int main() {
    CCar car(48900, 17, 225);
    cout << "price = " << car.getPrice() << endl;
    cout << "CType.getRadius = " << car.getCType().getRadius() << endl;
    cout << "CType.getWidth = " << car.getCType().getWidth() << endl;
    CCar car1;
    cout << "price = " << car1.getPrice() << endl;
    cout << "CType.getRadius = " << car1.getCType().getRadius() << endl;
    cout << "CType.getWidth = " << car1.getCType().getWidth() << endl;
    return 0;
}