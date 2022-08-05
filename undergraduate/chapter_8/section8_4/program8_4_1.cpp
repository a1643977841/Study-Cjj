//
// Created by ahao on 2022/7/17.
// 文件读操作过程中位置指针的变化
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class CStudent {
public:
    char id[11];
    char name[21];
    int score;
};

int main() {
    CStudent stu;
    int count = 0, nByte = 0;
    ifstream inFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_4\student.dat)", ios::in|ios::binary);
    if (!inFile) {
        cout << "文件打开失败！" << endl;
        return 0;
    }
    else {
        cout << "打开文件时位置指针：" << inFile.tellg() << endl;
        cout << "       每个记录大小：" << sizeof(CStudent) << endl;
    }
    while (inFile.read((char *) &stu, sizeof(CStudent))) {
        cout << left << setw(10) << stu.id << " " <<setw(20) << stu.name << " " << setw(3) << right << stu.score << "\t" << inFile.tellg() << endl;
        count ++;
        nByte += inFile.gcount();
    }
    cout << "读取文件结束时位置指针：" << inFile.tellg() << endl;
    cout << "共有记录数:" << count << ", 字节数：" << nByte << endl;
    inFile.clear(); // 将流恢复正常， 必不可少
    inFile.seekg(0); // 将文件指针移动到文件起始位置
    cout << "位置指针：" << inFile.tellg() << endl;
    inFile.read((char *)&stu,sizeof (CStudent));
    cout << left << setw(10) << stu.id << " " <<setw(20) << stu.name << " " << setw(3) << right << stu.score << "\t" << inFile.tellg() << endl;
    inFile.seekg(0, ios::end); // 将文件读指针移动到文件最后位置
    cout << "位置指针：" << inFile.tellg() << endl;
    inFile.close();
    return 0;
}