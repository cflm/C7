// calling.cpp -- defing, prototyping, and calling a function
// Created by 20862 on 2022/4/13.
//

#include <iostream>
void simple();

void simple() {
    using namespace std;
    cout << "I'm a simple function.\n";
}

int main()
{
    using namespace std;
    cout << "main() will call the simple() function.\n";
    simple();
    cout << "main() is finished with the simple() function.\n";
    return 0;
}

