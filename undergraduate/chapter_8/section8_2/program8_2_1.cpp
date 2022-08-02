//
// Created by ahao on 2022/7/17.
// 建立流对象，然后调用open()函数连接外部文件
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile;
    // 读方式打开文件
    inFile.open(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text.txt)",ios::in);
    if (inFile) {
        cout << "成功打开文件" << endl;
        inFile.close();
    } else {
        cout << "文件打开失败";
    }
    ofstream outFile;
    // 写方式打开文件
    outFile.open(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text.txt)",ios::out);
    if (!outFile)
        cout << "文件打开失败";
    else {
        cout << "成功打开文件" << endl;
        outFile.close();
    }
    // 以读写方式打开文本文件
    outFile.open(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text.txt)",ios::in|ios::out);
    if (outFile) {
        cout << "成功打开文件" << endl;
        outFile.close();
    } else {
      cout << "打开文件失败";
    }
    fstream ioFile;
    // 已读写方式创建文件
    ioFile.open(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text.txt)",ios::in|ios::out|ios::trunc);
    if (ioFile) {
        cout << "成功打开文件" << endl;
        ioFile.close();
    }
    return 0;
}