//
// Created by ahao on 2022/7/17.
// 封闭类的构造函数
//
#include <iostream>
#include <string>
using namespace std;
class MyDate {
public:
    MyDate();
    MyDate(int);
    MyDate(int, int);
    MyDate(int, int, int);
    MyDate(const MyDate &d);
    ~MyDate();
    void setDate(int, int, int);
    void setDate(MyDate);
    MyDate getMyDate();
    void setYear(int);
    int getMonth();
    void printDate() const;
private:
    int year, month, day;
};

MyDate::MyDate() {
    year = 1970;
    month = 1;
    day = 1;
    cout << "MyDate 默认构造函数" << endl;
}

MyDate::MyDate(int y) {
    year = y;
    month = 1;
    day=  1;
    cout << "MyDate 1个参数构造函数" << endl;
}

MyDate::MyDate(int y, int m) {
    year = y;
    month = m;
    day = 1;
    cout << "MyDate 2个参数构造函数" << endl;
}

MyDate::MyDate(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
    cout << "MyDate 3个参数构造函数" << endl;

}

MyDate::MyDate(const MyDate &d) {
    year = d.year;
    month = d.month;
    day = d.day;
    cout << "MyDate Copy构造函数" << endl;
}

MyDate::~MyDate() {
    cout << "MyDate 析构函数" << endl;
}

void MyDate::setDate(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void MyDate::setDate(MyDate oneD) {
    year = oneD.year;
    month = oneD.month;
    day = oneD.day;
}

MyDate MyDate::getMyDate() {
    MyDate d;
    d,year = year;
    d.month = month;
    d.day = day;
    return d;
}

void MyDate::setYear(int y) {
    year = y;
}

int MyDate::getMonth() {
    return month;
}

void MyDate::printDate() const {
    cout << year << "/" << month << "/" << day;
}
class Student {
public:
    Student();
    Student(string, MyDate);
    ~Student();
    void setStuden(string, MyDate);
    void setName(string);
    string getName();
    void setBirhday(MyDate);
    MyDate getBirhday();
    void printInfo() const;
private:
    string name;
    MyDate birthday;
};
Student::Student():name("Noname"),birthday(MyDate()) {
    cout << "Student 默认构造函数" << endl;
}

Student::Student(string str, MyDate d):name(str),birthday(d) {
    cout << "Student 2个参数构造函数" << endl;
}

Student::~Student() {
    cout << "Student 析构函数" << endl;
}

void Student::setStuden(string s, MyDate d) {
    name = s;
    birthday = d;
}

void Student::setName(string n) {
    name = n;
}

string Student::getName() {
    return name;
}

void Student::setBirhday(MyDate d) {
    birthday = d;
}

MyDate Student::getBirhday() {
    return birthday;
}

void Student::printInfo() const {
    cout << "姓名：" << name << "\t 生日：";
    birthday.printDate();
    cout << endl;
}
// 本科生类，继承至学生类
class UndergraduateStudent: public Student {
private:
    string department;
public:
    UndergraduateStudent();
    UndergraduateStudent(string, MyDate);
    ~UndergraduateStudent();
    void setDep(string);
    void printInfo();
};

UndergraduateStudent::UndergraduateStudent() {
    cout << "UndergraduateStudent 默认构造函数" << endl;
}
UndergraduateStudent::UndergraduateStudent(string str, MyDate d):Student(str, d) {
    cout << "UndergraduateStudent 2个参数构造函数" << endl;
}

UndergraduateStudent::~UndergraduateStudent() {
    cout << "UndergraduateStudent 析构函数" << endl;
}

void UndergraduateStudent::setDep(string dep) {
    department = dep;
}

void UndergraduateStudent::printInfo() {
    Student::printInfo();
    cout << "院系：\t" << department << endl << endl;
}
int main() {
    UndergraduateStudent s2("小张",MyDate());
    return 0;
}