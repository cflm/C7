// atrctfun.cpp -- functions with a structure argument
// Created by 20862 on 2022/4/13.
//
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

polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

int main() {
    using namespace std;
    rect rpos{};
    cout << "Enter the x and y coords:\n";
    while (cin >> rpos.x >> rpos.y) {
        polar ppos = rect_to_polar(rpos);
        show_polar(ppos);
        cout << "Enter the x and y coords(q to quit):\n";
        // 如果用户输入的是q，cin>>知道q不是数字,会将q留在输入队列中,并返回false，退出while循环
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect xypos) {
    using namespace std;
    polar answer{};
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos) {
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
