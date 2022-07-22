//
// Created by ahao on 2022/7/17.
// 公有继承访问控制
//
#include <iostream>
#include <string>
using namespace std;
class Base{
public:
    int vBPub;
protected:
    int vBPro;
private:
    int vBPri;
public:
    Base() {
        vBPub = 10;
        vBPro = 20;
        vBPri = 30;
    }
    void setPriValue(int);
    void setProValue(int, int);
    int getPriValue();
    int getProValue();
};

void Base::setPriValue(int k) {
    vBPri = k;
}

void Base::setProValue(int m, int n) {
    vBPro = m;
    vBPri = n;
}

int Base::getPriValue() {
    return vBPri;
}

int Base::getProValue() {
    return vBPro;
}
class Derived:public Base{
public:
    int vDPub, vBPub;
protected:
    int vDPro;
private:
    int vDPri;
public:
    Derived() {
        vDPub = 100;
        vDPro = 200;
        vDPri = 300;
        vBPub = 15;
    }
    void setPriValue(int);
    void setProValue(int, int);
    int getPriValue();
    int getProValue();
    void printValue();
};

void Derived::setPriValue(int k) {
    vDPri = k;
}

void Derived::setProValue(int m, int n) {
    vDPro = m;
    vDPri = n;
    Base::vBPro = 2*m;// 直接访问从基类继承的保护成员变量
    //Base::vBPri = 2*m; // 错误，不可以直接访问基类继承的私有成员
}

int Derived::getPriValue() {
    return vDPri; // 直接访问派生类的成员变量
}

int Derived::getProValue() {
    return vDPro; // 直接访问派生类的成员变量
}

void Derived::printValue() {
    cout << "在派生类中访问基类" << endl;
    cout << "基类公有变量：" << vBPub << endl;
    cout << "基类保护变量：" << vBPro << endl;
    //cout << Base::vBPri << endl; // 不能直接访问基类中的私有变量
    cout << "基类私有变量：" << Base::getPriValue() << endl; // 通过函数访问
    cout << "在派生类中访问派生类" << endl;
    cout << "派生类公有变量：" << vDPub << endl;
    cout << "派生类保护变量：" << vDPro << endl;
    cout << "派生类私有变量：" << vDPri << endl;
    cout << "从基类继承的公有变量：" << Base::vBPub << endl;
    cout << "从基类继承的保护变量：" << Base::vBPro << endl;
    //cout << "从基类集成的公有变量：" << Base::vBPri << endl;// 不可以直接访问
}
int main() {
    Base bObj;
    Derived dObj;
    cout << "在主函数中访问基类" << endl;
    cout << "公有成员：" << bObj.vBPub << endl;
    //cout << "公有成员：" << bObj.vBPro; // 不能直接访问保护和私有成员变量;
    cout << "保护成员：" << bObj.getProValue() << endl; // 通过函数访问
    cout << "私有成员：" << bObj.getPriValue() << endl; // 通过函数访问
    cout << "在主函数中访问派生类" << endl;
    cout << "公有成员：" << dObj.vDPub << endl;
    //cout << "保护成员：" << dObj.vDPro << endl; // 不能直接访问保护和私有成员
    cout << "    保护成员" << dObj.getProValue() << endl;
    cout << "基类 保护成员" << dObj.Base::getProValue() << endl;
    cout << "私有成员：" << dObj.getPriValue() << endl;
    cout << "dObj.vBPub = ：" << dObj.vBPub << endl;
    cout << "dObj.Base::vBPub = ：" << dObj.Base::vBPub << endl;
    dObj.printValue();
    return 0;
}
