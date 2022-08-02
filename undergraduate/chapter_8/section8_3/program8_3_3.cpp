//
// Created by ahao on 2022/7/17.
// 读入文本文件，加上行号后显示内容
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
    char ch, fileName[200];
    int count = 0; // 行号计数器
    bool newLine = true;
    cin >> fileName;
    ifstream inFile(fileName, ios::in);
    if (!inFile) {
        cout << "文件打开失败！" << endl;
        return 0;
    }
    while ((ch = inFile.get()) != EOF) {
        if (newLine) { // 若是新行开始 则显示行号
            cout << setw(4) << ++ count << ":";
            newLine = false; // 清楚新行标识
        }
        if (ch == '\n') // 若读入'\n' 则标识将开始下一个行
            newLine = true;
        cout << ch;
    }
    inFile.close();
    return 0;
}
