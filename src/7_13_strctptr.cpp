// strctptr.cpp -- function with pointer to structure argument
// Created by 20862 on 2022/4/13.
// 传递结构体的地址
#include <iostream>
#include <cmath>

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect *, polar *);

void show_polar(const polar *);

int main() {
    using namespace std;
    rect box{};
    polar p{};
    cout << "Enter the x and y components of the box's center: \n";
    cin >> box.x >> box.y;
    rect_to_polar(&box, &p);
    show_polar(&p);
    return 0;
}

void rect_to_polar(const rect *box, polar *p) {
    using namespace std;
    p->distance = sqrt(box->x * box->x + box->y * box->y);
    p->angle = atan2(box->y, box->x);
}

void show_polar(const polar *p) {
    using namespace std;
    cout << "distance = " << p->distance;
    cout << ", angle = " << p->angle << endl;
}