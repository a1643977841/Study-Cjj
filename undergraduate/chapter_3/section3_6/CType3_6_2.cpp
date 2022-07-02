//
// Created by ahao on 2022/7/1.
// 封闭类对象的创建和消亡
//
#include <iostream>
using namespace std;
class CType {
    private:
        int radius;
        int width;
    public:
        CType():radius(16), width(185) {
            cout << "CType构造函数" << endl;
        }// 构造
        CType(int r, int w) : radius(r), width(w) {
            cout << "CType有参构造函数" << endl;
        } // 构造
        ~CType() {
            cout << "CType 析构函数" << endl;
        }
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
        ~CCar() {
            cout << "CCar 析构函数" << endl;
        }
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
    cout << "CCar构造函数" << endl;
}
CCar::CCar(int p, int tr, int tw):price(p), type(tr, tw) {
    cout << "CCar有参构造函数" << endl;
}
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