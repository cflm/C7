// fun_ptr.cpp -- pointers to functions
// Created by 20862 on 2022/4/13.
//
#include <iostream>

double betsy(int);

double pam(int);

void estimate(int line, double (*pf)(int));

int main() {
    using namespace std;
    int lines;
    cout << "How many lines of code: ";
    cin >> lines;
    cout << "Estimated time to write: ";
    estimate(lines, betsy);
    cout << "Estimated time to write: ";
    estimate(lines, pam);
    return 0;
}

double betsy(int l) {
    return 0.05 * l;
}

double pam(int l) {
    return 0.03 * l + 0.0004 * l * l;
}

void estimate(int lines, double (*pf)(int)) {
    using namespace std;
    double time = (*pf)(lines);
    cout << time << " hour(s)" << endl;
}