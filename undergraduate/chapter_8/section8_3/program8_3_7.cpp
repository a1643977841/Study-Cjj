//
// Created by ahao on 2022/7/17.
// 从二进制文件中读取数据
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class CStudent{
public:
    char id[11];
    char name[21];
    int score;
};
int main() {
    CStudent stu;
    int count = 0, nbyte = 0;
    ifstream inFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\student.dat)", ios::in|ios::binary);// 二进制读方式打开
    if (!inFile) {
        cout << "文件打开失败";
        return 0;
    }
    cout << "学生学号      姓名\t\t\t成绩\n";
    while(inFile.read((char *) &stu, sizeof stu)) {
        cout << left << setw(10) << stu.id << " " << setw(20) << stu.name << " " << setw(3) << right << stu.score << endl;
        count ++;
        nbyte += inFile.gcount(); // 得到本次read的字节数量
    }
    cout << "共有记录数：" << count << ", 字节数：" << nbyte << endl;
    inFile.close();
    return 0;
}