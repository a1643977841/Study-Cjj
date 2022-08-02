//
// Created by ahao on 2022/7/17.
// 对文本文件score.txt进行输入/输出
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char id[11], name[21];
    int score;
    ofstream outFile;
    outFile.open(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\score.txt)", ios::out); // 以写方式打开文本文件
    if (!outFile) {
        cout << "创建文件失败" << endl;
        return 0;
    }
    cout << "请输入： 学号 姓名 成绩 \n";
    while (cin >> id >> name >> score)
        outFile << id << " " << name << " " << score << endl;
    outFile.close();
    return 0;
}
