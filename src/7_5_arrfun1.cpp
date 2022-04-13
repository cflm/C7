// arrfun1.cpp --functions with an array argument
// Created by 20862 on 2022/4/13.
//
#include <iostream>

const int ArSize = 8;

int sum_arr(const int arr[], int n);

int main() {
    using namespace std;
    int cookies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "The sum of the cookies is " << sum_arr(cookies, ArSize) << endl;
    return 0;
}

// return the sum of the integer array
int sum_arr(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}