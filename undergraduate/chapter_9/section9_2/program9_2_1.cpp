//
// Created by ahao on 2022/7/17.
// 类模板
//
#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
class Pair{
public:
    T1 first;
    T2 second;
    Pair(T1 k, T2 v): first(k), second(v) {}
    bool operator <(const Pair <T1, T2> &p) const;
};
template <class T1, class T2>
bool Pair<T1, T2> ::operator<(const Pair<T1, T2> &p) const {
    // 仅比较第一个成员变量的大小
    return first < p.first;
}
int main() {
    Pair<string, int> student("Tom", 19);
    Pair<string, int> student2("Jim", 21);
    Pair<int, int> coordinate(10, 20);
    Pair<string, string> dic("word", "单词");
    cout << "学生：" << student.first << " " << student.second << endl;
    cout << "学生：" << student2.first << " " << student2.second << endl;
    cout << "坐标：" << coordinate.first << " " << coordinate.second << endl;
    cout << "字典项：" << dic.first << " " << dic.second << endl;
    bool a = student < student2;
    if (a == 0)
    {
        cout << student.first << "位于" << student2.first << "之后" << endl;
    }
    else
    {
        cout << student.first << "位于" << student2.first << "之前" << endl;
    }
    return 0;
}