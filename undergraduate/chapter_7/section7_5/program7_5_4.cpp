//
// Created by ahao on 2022/7/17.
// 日期格式的转换
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
string Months[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
                     "Aug", "Sep", "Oct", "Nov", "Dec"};
int main() {
    char ch;
    int year, month, day;
    while((ch = cin.peek()) != EOF) { // 取输入留的第一个字符查看
        if (ch >= 'A' && ch < 'Z') {
            string sMonth;
            cin >> sMonth >> day >> year;
            // 查找月份完成转换
            for(month = 0;month < 12 && sMonth != Months[month]; ++ month);
        } else {
            cin >> year;
            cin.ignore() >> month; // 使用ignore跳过'.' 然后接受月
            cin.ignore() >> day;  // 使用ignore跳过'.' 然后接受日
            // 以上3条语句等价于：cin >> year >> ch >> month >> ch >> day
        }
        cin.ignore();
        cout << setfill('0') << setw(2) << month;// 设置填充字符'0'和输出宽度
        cout << "-" << setw(2) << day << "-" << setw(4) << year << endl;
    }
    return 0;
}