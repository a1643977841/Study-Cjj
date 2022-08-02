//
// Created by ahao on 2022/7/17.
// 文件复制
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\score.txt)", ios::binary|ios::in); // 以二进制读模式打开文件
    if (!inFile) {
        cout << "打开失败！" << endl;
        return 0;
    }
    ofstream outFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_3\scoreCopy.txt)", ios::binary|ios::out);// 以二进制写模式打开文件
    if (!outFile) {
        inFile.close();
        cout << "打开失败!" << endl;
        return 0;
    }
    char c;
    while (inFile.get(c))
        outFile.put(c);
    outFile.close();
    inFile.close();
    return 0;
}
