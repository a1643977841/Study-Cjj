//
// Created by ahao on 2022/7/17.
// 对文本文件的内容排序，将结果输出到另一个文件
//
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int MAX_NUM = 1000;
class CStudent{
public:
    char id[11];
    char name[21];
    int score;
}
stu[MAX_NUM];
int MyCompare(const void * el, const void * e2) { // 适用于qsort的函数
    return (*(CStudent *)el).score - (*(CStudent *)e2).score;
}
int main() {
    ifstream srcFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\score.txt)", ios::in);
    if (!srcFile) {
        cout << "打开失败" << endl;
        return 0;
    }
    ofstream destFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\out.txt)",ios::out); // 以文本模式打开  以备写入
    if (!destFile) {
        srcFile.close();
        cout << "打开失败" << endl;
        return 0;
    }
    int n = 0; //  读入的记录数量
    cout << "排序前:" << endl;
    while (srcFile >> stu[n].id >> stu[n].name >> stu[n].score) {
        cout << stu[n].id << " " << stu[n].name << " " << stu[n].score << endl;
        n++;
        // 可以使用cin那样用ifstream对象接受输入
    }
    // 排序
    qsort(stu,n,sizeof(CStudent),MyCompare);
    cout << "排序后：" << endl;
    for (int i = 0; i < n; ++i) {
        cout << stu[i].id << " " << stu[i].name << " " << stu[i].score << endl;
        destFile << stu[i].id << " " << stu[i].name << " " << stu[i].score << endl;
    }
    destFile.close();
    srcFile.close();
    return 0;
}