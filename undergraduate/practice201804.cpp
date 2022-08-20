//
// Created by ahao on 2022/8/20.
// 2018 4月 试卷编程题目
//
#include <iostream>
using namespace std;
class circle{
private:
    float radius;
public:
    circle(float x) {
        radius = x;
    }
    float GetArea() {
        return radius * radius * 3.14;
    }
};
int main() {
    circle c(5.6);
    cout << "圆的面积为：" << c.GetArea() << endl;
    return 0;
}