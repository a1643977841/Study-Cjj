//
// Created by ahao on 2022/7/17.
// 对象排序程序
//
#include <iostream>
using namespace std;
template <typename T>
int myCompare(const T &left, const T &right) {
    if (left < right) {
        return -1;
    } else if (right < left) {
        return 1;
    } else {
        return 0;
    }
}
template <class T>
void Swap(T &x, T &y) {
    T tmp = x;
    x = y;
    y = tmp;
}
int main() {
    string arrayString[10] = {"shang","xia", "zuo", "you", "qian", "hou", "dong", "xi", "nan", "bei"};
    int j;
    string temp;
    for (int i = 0; i < 10; i++) {
        j = i;
        while (j > 0 && myCompare<string>(arrayString[j - 1], arrayString[j]) > 0) {
            Swap(arrayString[j], arrayString[j-1]);
            j --;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << arrayString[i] << endl;
    }
}