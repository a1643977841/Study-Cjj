//
// Created by ahao on 2022/8/20.
// 2017 4月 试卷编程题目
//
#include <iostream>
#include <string>
using namespace std;
class Birthday{
private:
    int year, month, day;
public:
    Birthday(int year = 1970, int month = 1, int day = 1) {
        this-> year = year;
        this-> month = month;
        this-> day = day;
    }
    void printBirthday() const {
        cout << year << "年" << month << "月" << day << "日" << endl;
    }
};
class Person{
private:
    string name;
    string sex;
    Birthday birthday;
public:
    Person(string name, string sex,int year = 1970, int month = 1, int day = 1):birthday(year, month, day) {
        this-> name = name;
        this-> sex = sex;
    }
    void printPerson() const {
        cout << "姓名：" << name << endl;
        cout << "性别：" << sex << endl;
        cout << "生日：";
        birthday.printBirthday();
    }
};
int main() {
    Person p("刘", "男", 1999, 3, 21);
    p.printPerson();
    return 0;
}