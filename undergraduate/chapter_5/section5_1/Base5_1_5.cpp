//
// Created by ahao on 2022/7/16.
// 类之间的访问示例
//
#include <iostream>
#include <string>
using namespace std;
class CStudent {
    private:
        string name;// 姓名
        string id; // 学号
        char gender; // 性别 F：女生 M：男生
        int age; // 年龄
    public:
        void PrintInfo();
        void setInfo(const string &, const string &, int, char);
        void setName(string);
        string getName();
        void setId(string);
        string getId();
};

void CStudent::PrintInfo() {
    cout << "姓名：\t" << name << endl;
    cout << "学号：\t" << id << endl;
    cout << "年龄：\t" << age << endl;
    cout << "性别：\t" << gender << endl;
}

void CStudent::setInfo(const string & _name, const string & _id, int _age, char _gender) {
    name = _name;
    id = _id;
    age = _age;
    gender = _gender;
}

void CStudent::setName(string name) {
    this->name = name;
}

string CStudent::getName() {
    return name;
}

void CStudent::setId(string id) {
    this->id = id;
}

string CStudent::getId() {
    return id;
}

// 本科生类，继承于类CStudent
class CUndergraduateStudent: public CStudent {
    private:
        string department; // 学生所属的系名
    public:
        void  PrintInfo();
        void setInfo(const string &, const string &, int, char, const string &);
};

void CUndergraduateStudent::PrintInfo() {
    CStudent::PrintInfo();// 调用基类PrintInfo方法
    cout << "院系：\t" << department << endl << endl;// 另外输出本类的院系
}

void CUndergraduateStudent::setInfo(const string & _name, const string & _id, int _age, char _gender,const string & _department) {
    CStudent::setInfo(_name, _id, _age, _gender);
    department = _department;
}
// 研究生类
class CGraduatedStudent: public CStudent {
    private:
        string department; // 所属的系名
        string advisor; // 导师
    public:
        void PrintInfo();
        void setInfo(const string &, const string &, int, char, const string &, const string &);
};

void CGraduatedStudent::PrintInfo() {
    CStudent::PrintInfo();
    cout << "院系：\t" << department << endl;
    cout << "导师：\t" << advisor << endl << endl;
}

void CGraduatedStudent::setInfo(const string & _name, const string & _id, int _age, char _gender,const string & _department, const string & _advisor) {
    CStudent::setInfo(_name, _id, _age, _gender);
    department = _department;
    advisor = _advisor;
}
int main() {
    CStudent s1; // 基类对象
    CUndergraduateStudent s2; // 派生类对象
    CGraduatedStudent s3; // 派生类对象
    s2.setInfo("小张", "2018-6-2-4", 19, 'M', "数学系");
    s3.setInfo("小李", "M2017-9", 23, 'F', "计算机学院", "孟教授");
    s2.PrintInfo();
    s3.PrintInfo();
    // cout << s2.name << endl;// 错误，不能直接访问基类的私有成员变量
    // s2.name = "张一" // 错误，name是基类中的私有成员变量
    cout << s2.getName() << endl;
    s2.setName("张一");
    s2.PrintInfo();
    cout << s2.getName() << "," << s2.getId();
    return 0;
}

