// recur.cpp -- using recursion
// Created by 20862 on 2022/4/13.
//
#include <iostream>

void countdown(int n);

int main() {
    countdown(4);
    return 0;
}

void countdown(int n) {
    if (n <= 0) {
        std::cout << n << ": Blastoff!\n";
    } else {
        std::cout << "countdown ..." << n << "\n ";
        countdown(n - 1);
        std::cout << n << ": KaBoom!\n";
    }
}