//
// Created by ahao on 2022/8/21.
// 2018 10月 试卷编程题目
//
#include <iostream>
#include <string>
using namespace std;
class Circle{
private:
    float radius;
public:
    Circle(float radius) {
        this-> radius = radius;
    }
    float getArea() const {
        return radius * radius * 3.14;
    }
};
class Table{
private:
    float height;
public:
    Table(float height) {
        this-> height = height;
    }
    float getHeight() const {
        return height;
    }
};

class RoundTable: public Table, public Circle {
private:
    string color;
public:
    RoundTable(float r, float height, string color): Circle(r), Table(height) {
        this-> color = color;
    }
    string getColor() const {
        return color;
    }
};
int main() {
    RoundTable rt(0.8, 1.2, "黑色");
    cout << "圆桌的属性数据" << endl;
    cout << "高度：" << rt.getHeight() << endl;
    cout << "面积：" << rt.getArea() << endl;
    cout << "颜色：" << rt.getColor() << endl;
    return 0;
}