// topfive.cpp -- handing an array of string objects
// Created by 20862 on 2022/4/13.
// 函数和string对象
#include <iostream>
#include <string>

using namespace std;
const int Size = 5;

void display(const string sa[], int n);

int main() {
    string list[Size] = {
            "C++", "Java", "C#", "Python", "JavaScript"
    };
    display(list, Size);
    return 0;
}

void display(const string sa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}