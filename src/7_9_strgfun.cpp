// strgfun.cpp -- functions with a string argument
// Created by 20862 on 2022/4/13.
//
#include <iostream>

unsigned int c_in_str(const char *s, char c);

int main() {
    using namespace std;
    char mmm[] = "This is a C++ string";
    char nnn[] = "mississippi";
    char *wail = nnn;

    unsigned int ms = c_in_str(mmm, 's');
    unsigned int mi = c_in_str(wail, 'i');
    cout << "\"" << mmm << "\" contains " << ms << " 's'\n";
    cout << "\"" << nnn << "\" contains " << mi << " 'i'\n";
    return 0;
}

unsigned int c_in_str(const char *s, char c) {
    unsigned int count = 0;
    while (*s)
        if (*s == c) {
            count++;
            s++;
        } else {
            s++;
        }
    return count;
}