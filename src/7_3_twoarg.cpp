// twoarg.cpp -- a function with two arguments
// Created by 20862 on 2022/4/13.
//

#include <iostream>
using namespace std;
void n_chars(char, int);

int main()
{
    char ch;
    int n;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> n;
    n_chars(ch, n);
    return 0;
}

void n_chars(char ch, int n)
{
    for (int i = 0; i < n; i++)
        cout << ch;
    cout << endl;
}