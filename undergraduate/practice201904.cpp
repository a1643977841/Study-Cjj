//
// Created by ahao on 2022/8/21.
// 2019 04月 试卷编程题目
//
#include <iostream>
using namespace std;
class Vehicle {
    float maxSpeed, weight;
public:
    void run() const{
        cout << "正在进行" << endl;
    }
    void stop() const {
        cout << "停止" << endl;
    }
    Vehicle(float speed, float w) {
        maxSpeed = speed;
        weight = w;
        cout << "Vehicle 构造函数" << endl;
    }
    virtual ~Vehicle() {
        cout << "Vehicle 析构函数" << endl;
    }
};
class Bicycle: virtual public Vehicle {
private:
    float height;
public:
    Bicycle(float speed, float w, float h): Vehicle(speed, w) {
        height = h;
        cout << "Bicycle 构造函数" << endl;
    }
    ~Bicycle() {
        cout << "Bicycle 析构函数" << endl;
    }
};
class Motorcar: virtual public Vehicle {
private:
    int seatNum;
public:
    Motorcar(float speed, float w, int num): Vehicle(speed, w) {
        seatNum = num;
        cout << "Motorcar 构造函数" << endl;
    }
    ~Motorcar() {
        cout << "Motorcar 析构函数" << endl;
    }
};

class MotorCycle: public Bicycle, public Motorcar {
public:
    MotorCycle(float speed, float w, float h, int num) : Vehicle(speed, w),
                                                         Bicycle(speed, w, h),
                                                         Motorcar(speed, w, num) {
        cout << "MotorCycle 构造函数" << endl;
    }
    ~MotorCycle() {
        cout << "MotorCycle 析构函数" << endl;
    }
};
int main() {
    MotorCycle m(22.2, 33.3, 44.4, 40);
}