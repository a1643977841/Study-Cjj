//
// Created by ahao on 2022/8/21.
// 2019 10月 试卷编程题目
//
#include <iostream>
using namespace std;
class Test {
private:
    int x, y;
public:
    void init(int x, int y) {
        this-> x = x;
        this-> y = y;
    }
    void print() const {
        cout << x << "-" << y << "=" << x-y;
    }
};