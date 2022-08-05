//
// Created by ahao on 2022/7/17.
// 读取二进制学生成绩文件，查找最高分和最低分的学生...
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
    int count = 0, maxScore, minScore, maxNo, minNo;
    maxScore = INT_MIN; // c++ 整型最小值
    minScore = INT_MAX; // c++ 整型最大值
    maxNo = minNo = 0;
    ifstream inFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_4\student.dat)", ios::in|ios::binary);
    if (!inFile) {
        cout << "文件打开失败！" << endl;
        return 0;
    }

    while (inFile.read((char *) &stu, sizeof(CStudent))) {
        if (stu.score > maxScore) { // 查找最高分学生
            maxScore = stu.score; // 记录当前最高分
            maxNo = count; // maxNo记录当前最高分记录号
        } else if (stu.score < maxScore) {
            maxScore = stu.score;
            minNo = count;
        }
        count ++; // 记录数+1
    }
    inFile.clear(); // 恢复状态
    inFile.seekg(sizeof(CStudent) * maxNo,ios::beg); // 文件指针移动到最高分记录
    inFile.read((char *)&stu,sizeof (CStudent));
    cout << "最高分记录：" << maxNo << ":" << ":" << stu.id << ", " << stu.name << ","  << stu.score << endl;
    inFile.seekg(sizeof(CStudent) * minNo,ios::beg); // 文件指针移动到最低分记录
    inFile.read((char *)&stu,sizeof (CStudent));
    cout << "最低分记录：" << minNo << ":" << ":" << stu.id << ", " << stu.name << ","  << stu.score << endl;
    inFile.close();
    return 0;
}