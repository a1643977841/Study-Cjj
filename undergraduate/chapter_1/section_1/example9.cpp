//
// Created by ahao on 2022/6/25.
// 字符串成员函数的使用
// 方法详情见 表 1-1 P53
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str; // 未初始化，空串
    if (str.empty())
        cout << "str is NULL" << ",length = " << str.length() << endl;
    else
        cout << "str is NOT NULL" << endl;
    str.append("abcdefg");
    cout << "str is " << str << ", size = " << str.size() << endl;
    const char* p = str.c_str(); // 返回字符串的指针，用于将string转为const char*
    cout << "*p = " << p << endl;
    cout << "find:" << str.find("de", 0) << endl; // 查找成功， 3
    cout << "find:" << str.find("de", 4) << endl; // 查找失败
    string str1 = str.insert(4, "123"); // 在4的位置插入一个字符串
    cout << str1 << endl;
    return 0;
}
