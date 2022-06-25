//
// Created by ahao on 2022/6/25.
// myDate 类的定义示例----日期类
// student 学生类
// main 主函数 测试类
//
#include <iostream>
using namespace std;

class myDate {
public:
    myDate(); // 构造函数
    myDate(int, int, int); // 构造函数
    void setDate(int, int, int); // 设置日期
    void setDate(myDate); // 设置日期
    myDate getDate(); // 获取日期
    void setYear(int); // 设置年
    int getMonth() const; //  获取月
    void printDate() const; // 打印日期 常成员函数
private:
    int year, month, day; // 成员变量， 表示年、月、日
};
// 再类体外定义成员函数
myDate::myDate() {
    year = 1970, month = 1, day = 1;
}
myDate::myDate(int y, int m, int d) {
    year = y, month = m, day = d;
}
void myDate::setDate(int y, int m, int d) {
    year = y, month = m, day = d;
}
void myDate::setDate(myDate oneD) {
    year = oneD.year, month = oneD.month, day = oneD.day;
}
myDate myDate::getDate() {
    return *this;
}
void myDate::setYear(int y) {
    year = y;
}
int myDate::getMonth() const {
    return month;
}
void myDate::printDate() const { // 不能修改属性值
    cout << year << "/" << month << "/" << day;
}
// 学生类
#include <string>
class Student {
public:
    void setStudent(string, myDate); // 设置学生信息
    void setName(string); // 设置姓名
    string getName(); // 获取姓名
    void setBirthday(myDate); // 设置生日
    myDate getBirthday() const; // 获取生日
    void printStudent(); // 打印信息
private:
    string name; // 姓名
    myDate birthday; // 生日
};

void Student::setStudent(string s, myDate d) {
    name = s;
    birthday.setDate(d);
}

void Student::setName(string n) {
    name = n;
}

string Student::getName() {
    return name;
}

void Student::printStudent() {
    cout << "姓名:" << name << "\t生日";
    birthday.printDate();
    cout << endl;
}

myDate Student::getBirthday() const {
    return birthday;
}

void Student::setBirthday(myDate d) {
    birthday.setDate(d);
}
/**
 * 对象调用
 */
void test1() {
    Student ss;
    int y, m, d;
    string name_;
    cout << "请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    cin >> name_ >> y >> m >> d;
    ss.setStudent(name_, myDate(y, m, d));
    ss.printStudent();
}
/**
 * 指针调用
 */
void test2() {
    Student ss;
    int y, m, d;
    string name_;
    Student *sp = &ss;
    cout << "请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    cin >> name_ >> y >> m >> d;
    sp -> setStudent(name_, myDate(y, m, d));
    sp -> printStudent();
}
/**
 * 引用调用
 */
void test3() {
    Student ss;
    int y, m, d;
    string name_;
    Student &sp = ss;
    cout << "请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    cin >> name_ >> y >> m >> d;
    sp.setStudent(name_, myDate(y, m, d));
    sp.printStudent();
}

int main() {
    // 测试对象调用
//    test1();
    // 测试指针调用
    test2();
    // 测试引用调用
//    test3();
    return 0;
}