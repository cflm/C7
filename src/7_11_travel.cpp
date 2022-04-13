// travel.cpp -- using structures with functions
// Created by 20862 on 2022/4/13.
// 函数 和 结构体

#include <iostream>

struct travel_time {
    int hour;
    int minute;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);

void show(travel_time t);

int main() {
    using namespace std;
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};
    travel_time trip = sum(day1, day2);
    show(trip);
    travel_time day3 = {4, 32};
    trip = sum(trip, day3);
    show(trip);
    return 0;
}

travel_time sum(travel_time t1, travel_time t2) {
    travel_time total{};
    total.hour = t1.hour + t2.hour;
    total.minute = t1.minute + t2.minute;
    total.hour += total.minute / Mins_per_hr;
    total.minute %= Mins_per_hr;
    return total;
}

void show(travel_time t) {
    using namespace std;
    cout << "The total trip duration is " << t.hour << " hours and "
         << t.minute << " minutes.\n";
}