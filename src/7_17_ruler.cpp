// ruler.cpp -- using recursion to subdivide a ruler
// Created by 20862 on 2022/4/13.
//
#include <iostream>

const int Len = 66;
const int Dive = 6;

void subDivide(char ar[], int low, int high, int level);

int main() {
    using namespace std;
    char ruler[Len];
    int i;
    for (i = 0; i < Len - 2; i++)
        ruler[i] = ' ';
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;
    for (i = 1; i <= Dive; i++) {
        subDivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; j < Len - 2; j++)
            ruler[j] = ' ';
    }
    return 0;
}


void subDivide(char ar[], int low, int high, int level) {
    if (level == 0)
        return;
    int mid = (low + high) / 2;
    ar[mid] = '|';
    subDivide(ar, low, mid, level - 1);
    subDivide(ar, mid, high, level - 1);
}