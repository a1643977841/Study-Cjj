//
// Created by ahao on 2022/7/17.
// 读入学生成绩文件score.txt并显示内容
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
    char id[11], name[21];
    int score;
    ifstream inFile;
    inFile.open(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\score.txt)", ios::out); // 以写方式打开文本文件
    if (!inFile) {
        cout << "创建文件失败" << endl;
        return 0;
    }
    while (inFile >> id >> name >> score)
        cout << left << setw(10) << id << " " << setw(20) << name << " " <<setw(3) << right << score << endl;
    inFile.close();
    return 0;
}
