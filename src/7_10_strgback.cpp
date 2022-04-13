// strgback.cpp -- a function that return a pointer to char
// Created by 20862 on 2022/4/13.
// 函数与C风格字符串
#include <iostream>

char *buildstr(char c, int n);

int main() {
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *p = buildstr(ch, times);
    cout << "The string is: " << p << endl;
    delete[] p;
    p = buildstr('+', 10);
    cout << p << " DONE " << p << endl;
    delete[] p;

    return 0;
}


// build string made of n c characters
char *buildstr(char c, int n) {
    char *p;
    p = new char[n + 1];
    for (int i = 0; i < n; i++)
        *(p + i) = c;
    *(p + n) = '\0';
// another way to do it
//    p[n] = '\0';
//    while (n-->0)
//        p[n] = c;
    return p;
}

