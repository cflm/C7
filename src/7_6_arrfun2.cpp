// arrfun2.cpp --
// Created by 20862 on 2022/4/13.
//

#include <iostream>

const int ArSize = 8;

int sum_arr(const int arr[], int n);

int main() {
    using namespace std;
    int cookies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << cookies << " = array address" << endl;
    cout << sizeof cookies << " = sizeof address" << endl;

    cout << "The sum of the cookies is " << sum_arr(cookies, ArSize) << endl;
    cout << "The sum of the first three cookies is " << sum_arr(cookies, 3) << endl;
    cout << "The sum of the last four cookies is " << sum_arr(cookies + 4, 4) << endl;
    return 0;
}

// return the sum of the first n elements of arr
int sum_arr(const int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}