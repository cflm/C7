// arrobj.cpp -- functions for array object
// Created by 20862 on 2022/4/13.
//
#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> SeasonsName = {
        "Spring", "Summer", "Fall", "Winter"
};

void fill(std::array<double, Seasons> *pa);

void show(std::array<double, Seasons> da);

int main() {
    using namespace std;
    array<double, Seasons> sales{};
    fill(&sales);
    show(sales);
    return 0;
}

void fill(std::array<double, Seasons> *pa) {
    using namespace std;
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter the sales" << SeasonsName[i] << ":\n";
        cin >> (*pa)[i];
    }
}

void show(const std::array<double, Seasons> da) {
    using namespace std;
    double total = 0;
    for (int i = 0; i < Seasons; i++) {
        cout << "Sales for " << SeasonsName[i] << ": $";
        cout << da[i] << endl;
        total += da[i];
    }
    cout << "Total sales: $" << total << endl;
}