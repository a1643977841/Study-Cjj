//
// Created by ahao on 2022/6/27.
// 设计并实现二维坐标系下的类Point， 类的每个对象都有横、纵坐标
// 为类添加必要计算函数，
// 例如 计算给定点到(0，0)的距离，计算给定两个点之间的距离，判断给定的3个点是否能构成一个三角形。
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }
    int getX() const {
        return x;
    }

    void setX(int x) {
        Point::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Point::y = y;
    }
    double calculate() const;
    bool calculate(Point *p1, Point *p2) const;
    double calculate(Point *p1) const;
};

double Point::calculate() const {
    double item = sqrt(x * x + y * y);
    return item;
}

bool Point::calculate(Point *p1, Point *p2) const {
    double a, b, c;
    a = sqrt((x - p1 -> getX()) * (x - p1 -> getX()) + (y - p1 -> getY()) * (y - p1 -> getY()) );
    b = sqrt((x - p2 -> getX()) * (x - p2 -> getX()) + (y - p2 -> getY()) * (y - p2 -> getY()) );
    c = sqrt((p2 -> getX() - p1 -> getX()) * (p2 -> getX() - p1 -> getX()) + (p2 -> getY() - p1 -> getY()) * (p2 -> getY()  - p1 -> getY()) );
    if (a + b > c && a + c > b && b + c > a ) return true;
    return false;
}

double Point::calculate(Point *p1) const {
    double a;
    a = sqrt((x - p1 -> getX()) * (x - p1 -> getX()) + (y - p1 -> getY()) * (y - p1 -> getY()) );
    return a;
}
int main() {
    Point *p = new Point(1, 1);
    Point *p1 = new Point(2, 2);
    Point *p2 = new Point(3, 6);
    bool boo = p ->calculate(p1, p2);
    double a = p ->calculate(p1);
    cout << "是否构成三角形：" <<boo << endl;
    cout << "p和p1的距离：" <<a << endl;
}
/*
三点是否共线分三种情况考虑：
①当三条直线的斜率都存在时，若三条直线的斜率相同，三点共线;
②三条直线的斜率都不存在，即三个横坐标相同，三点共线;
③其他情况下：若三条直线的纵坐标相同，三点共线；
否则三点不共线;
 */
bool kk(int a,int b,int c,int d,int e,int f) //判断三点(a,b)(c,d)(e,f)是否共线
//return 0代表在同一条直线上
{
    if (c != a && e != c && e != a)
    {
        double k1 = 1.0 * (d - b) / (c - a);
        double k2 = 1.0 * (f - d) / (e - c);
        double k3 = 1.0 * (f - b) / (e - a);
        if (k1 == k2 && k2 == k3)
        {
            return 0;
        }
        else
        {
            return 1;
        }

    }
    else if (a == c && c == e)
    {
        return 0;
    }
    else
    {
        if (b == d && d == f)
            return 0;
        else
            return 1;
    }
}
