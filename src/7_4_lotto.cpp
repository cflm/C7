// lotto.cpp -- probability of winning
// Created by 20862 on 2022/4/13.
//
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
    using namespace std;
    double total, choices;
    cout << "Enter total and choices: ";
    while ((cin >> total >> choices) && choices <= total) {
        cout << "The probability of winning is " << probability(total, choices) << endl;
        cout << "Enter total and choices( q to quit): ";
    }
    cout << "Done!\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--) {
        result *= n / p;
    }
    return result;
}

