// arrfun3.cpp -- array functions and const
// Created by 20862 on 2022/4/13.
//
#include <iostream>

const int Max = 5;

// function prototypes
int fill_array(double ar[], int limit);

void show_array(const double ar[], int n);

void revalue(double r, double ar[], int n);

int main() {
    using namespace std;
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0) {
        cout << "Enter re-value rate: ";
        double rate;
        while (!(cin >> rate)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Please Enter re-value rate(type double): ";
        }

        revalue(rate, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter number #" << i + 1 << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input!. Please enter a number: ";
            break;
        } else if (temp < 0) {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n) {
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "The array#" << i + 1 << " :" << ar[i] << "\n";
}

// multiply each element by rate
void revalue(double r, double ar[], int n) {
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}