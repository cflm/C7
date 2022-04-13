// arrfun4.cpp -- functions with an array range
// Created by 20862 on 2022/4/13.
//
#include <iostream>

const int ArSize = 8;

int sum_arr(const int *beg, const int *end);

int main() {
    using namespace std;
    int cookies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "The sum of total cookies is " << sum_arr(cookies, cookies + ArSize) << endl;
    cout << "The sum of first 3 cookies is " << sum_arr(cookies, cookies + 3) << endl;
    cout << "The sum of last 4 cookies is " << sum_arr(cookies + 4, cookies + 8) << endl;
    return 0;
}

int sum_arr(const int *beg, const int *end) {
    int sum = 0;
    while (beg != end) {
        sum += *beg++;
    }
    return sum;
}