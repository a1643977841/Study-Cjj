//
// Created by ahao on 2022/7/17.
// 使用多态处理图像
//
#include <iostream>
#include <cmath>
using namespace std;
class CShape {
protected:
    double acreage;// 图形面积子类可以访问
public:
    CShape() {
        cout << "基类的构造函数" << endl;
    }
    virtual ~CShape() {
        cout << "基类的析构函数" << endl;
    }
    virtual double CalAcr(){
        // 计算面积，虚函数
        return 0;
    }
    virtual void setAcreage(double acre) {}; // 设置面积值, 虚函数
    virtual void printInfo() {};// 显示信息， 虚函数
};
// 矩形类
class CRectangle: public CShape {
    double width, high; // 矩形的宽度和高度
public:
    CRectangle(double w, double h) {
        cout << "矩形带参数构造函数" << endl;
        width = w;
        high = h;
    }
    CRectangle() {
        cout << "矩形无参构造函数" << endl;
        width = 0;
        high = 0;
    }
    ~CRectangle() {
        cout << "矩形析构函数" << endl;
    }

    virtual double CalAcr();
    virtual void setAcreage(double acre) ;
    virtual void printInfo();
};
// 图形类
class CCircle: public CShape {
    double radius;
public:
    CCircle(double r) {
        cout << "圆形一个参数构造函数" << endl;
        radius = r;
    }
    CCircle() {
        cout << "圆形无参数函数" << endl;
        radius = 0;
    }
    ~CCircle() {
        cout << "圆形析构函数" << endl;
    }
    virtual double CalAcr();
    virtual void setAcreage(double acre) ;
    virtual void printInfo();
};
class CTriangle: public CShape {
    double a,b,c; // 三条边的长度, 私有的
public:
    CTriangle(double a, double b, double c) {
        cout << "三角形带参构造函数" << endl;
        this-> a = a;
        this-> b = b;
        this-> c = c;
    }
    CTriangle() {
        cout << "三角形无参构造函数" << endl;
        a = 0;
        b = 0;
        c = 0;
    };
    ~CTriangle() {
        cout << "三角形析构函数" << endl;
    }
    virtual double CalAcr();
    virtual void setAcreage(double acre) ;
    virtual void printInfo();
};
double CRectangle::CalAcr() {
    return width * high; // 计算矩形面积
}
void CRectangle::printInfo() {
    // 输出矩形信息
    cout << "矩形。\t 宽度 = " << this-> width << "，高度 = " << this-> high << ", 面积 = " << this-> acreage << endl;
}
void CRectangle::setAcreage(double acre) {
    acreage = acre;
}

double CCircle::CalAcr() {
    return 3.14*radius*radius;
}
void CCircle::printInfo() {
    cout << "圆。\t半径 = " << this->radius << ",面积 = " << this-> acreage << endl;
}
void CCircle::setAcreage(double acre) {
    acreage = acre;
}

double CTriangle::CalAcr() {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}
void CTriangle::printInfo() {
    cout << "三角形。三条边分别是：" << this-> a << "," << this-> b << "," << this-> c << ", 面积 = " << this-> acreage << endl;
}
void CTriangle::setAcreage(double acre) {
    acreage = acre;
}
CShape *pShapes[100]; // 用来存储集合形状
int main() {
    int i,n;
    double temp1,temp2,temp3;
    CRectangle * pr;CCircle *pc; CTriangle *pt;
    cin >> n;
    for(i = 0; i < n; ++i) {
        char c;
        cin >> c;
        switch (c) {
        case 'R':case 'r':
            cin >> temp1 >> temp2;
            pr = new CRectangle(temp1, temp2);
            pr->setAcreage(pr->CalAcr());
            pShapes[i] = pr;
            break;
        case 'C':case 'c':
            cin >> temp1;
            pc = new CCircle(temp1);
            pc->setAcreage(pr->CalAcr());
            pShapes[i] = pc;
            break;
        case 'T':case 't':
            cin >> temp1 >> temp2 >> temp3;
            pt = new CTriangle(temp1, temp2, temp3);
            pt->setAcreage(pr->CalAcr());
            pShapes[i] = pt;
            break;
        }
    }
    if (n == 1) cout << "共有" << n << "种图形，他是：" << endl;
    else cout << "共有" << n << "种图形，分别是：" << endl;
    for (int i = 0; i < n; ++i) {
        pShapes[i]-> printInfo();
        delete pShapes[i];
    }
    return 0;
}