//
// Created by ahao on 2022/7/17.
// 用二进制文件保存学生信息
//
#include <iostream>
#include <fstream>
using namespace std;
class CStudent {
public:
    char id[11];
    char name[21];
    int score;
};
int main() {
    CStudent stu;
    ofstream outFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\student.dat)", ios::out|ios::binary); // 以二进制形式
    if (!outFile) {
        cout << "文件打开失败" << endl;
        return 0;
    }
    cout << "请输入： 学号 姓名 成绩 " << endl;
    while (cin >> stu.id >> stu.name >> stu.score)
        outFile.write((char*) &stu, sizeof stu); // 向文件写入数据
    outFile.close();
    return 0;
}

