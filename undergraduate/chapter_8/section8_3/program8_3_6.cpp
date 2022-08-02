//
// Created by ahao on 2022/7/17.
// 向二进制文件中追加数据
//
#include <iostream>
#include <fstream>
using namespace std;
class CStudent{
public:
    char id[11];
    char name[21];
    int score;
};
int main() {
    char ch;
    cout << "确定需要向文件中追加新数据吗";
    cin >> ch;
    if (ch == 'Y' || ch == 'y') {
        CStudent stu;
        ofstream outFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\student.dat)", ios::app|ios::binary);// 二进制形式追加
        if (!outFile) {
            cout << "文件打开失败";
            return 0;
        }
        cout << "请输入： 学号 姓名 成绩 " << endl;
        while (cin >> stu.id >> stu.name >> stu.score)
            outFile.write((char*) &stu, sizeof stu); // 向文件写入数据
        outFile.close();
    }
    return 0;
}
