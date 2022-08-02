//
// Created by ahao on 2022/7/17.
// 调用流类带参数的构造函数打开文件
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text2.txt)",ios::in);
    if (inFile) {
        cout << "成功打开文件" << endl;
        inFile.close();
    }
    else{
        cout << "文件打开失败" << endl;
    }
    ofstream outFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text2.txt)",ios::out);
    if (outFile) {
        cout << "成功打开文件" << endl;
        outFile.close();
    }
    else{
        cout << "文件打开失败" << endl;
    }
    fstream fFile(R"(G:\MyWordkspace\CjjStudy\undergraduate\chapter_8\section8_2\text2.txt)",ios::in|ios::out);
    if (fFile) {
        cout << "成功打开文件" << endl;
        fFile.close();
    }
    else{
        cout << "文件打开失败" << endl;
    }
    return 0;
}