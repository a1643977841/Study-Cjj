//
// Created by ahao on 2022/6/25.
// 成员的可访问范围
//
#include <iostream>
using namespace std;
class Box {
    public:
        double length;
        void setWidth(double wid);
        double getWidth() const;
    private:
        double width;
};

void Box::setWidth(double wid) {
    width = wid;
}

double Box::getWidth() const {
    return width;
}

int main() {
    Box box; // 声明一个对象
    // 不实用成员函数设置长度
    box.length = 10.0; // 正确， 因为length 是公开的
    cout << "Length of box : " << box.length << endl;
    // 不使用成员函数设置宽度
    // box.width = 10.0; // 错误的 因为width是私有的
    box.setWidth(10.0); // 必须使用成员函数设置宽度
    cout << "Width of box : " << box.getWidth() << endl;
}