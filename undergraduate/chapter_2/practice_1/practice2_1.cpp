//
// Created by ahao on 2022/6/27.
// 设计并实现一个类Course， 它代表学校中的一门课程
// 属性包括课程名称 学分 学时数 课程类别 授课专业等 并定义必要的访问函数
//
#include <iostream>
#include <string>
using namespace std;
class Course
{
private :
    string courseName;
    int credit;
    int hours;
    string courseCategory;
    string specialized;
public :
    const string &getCourseName() const {
        return courseName;
    }

    void setCourseName(const string &courseName) {
        Course::courseName = courseName;
    }

    int getCredit() const {
        return credit;
    }

    void setCredit(int credit) {
        Course::credit = credit;
    }

    int getHours() const {
        return hours;
    }

    void setHours(int hours) {
        Course::hours = hours;
    }

    const string &getCourseCategory() const {
        return courseCategory;
    }

    void setCourseCategory(const string &courseCategory) {
        Course::courseCategory = courseCategory;
    }

    const string &getSpecialized() const {
        return specialized;
    }

    void setSpecialized(const string &specialized) {
        Course::specialized = specialized;
    }
};
