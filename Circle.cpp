#include "Circle.h"
#include <iostream>
using namespace std;

double Circle::area() const {
    return 3.14 * a * a;
}

double Circle::perimeter() const {
    return 2 * 3.14 * a;
}

void Circle::print() const {
    cout << "Circle" << endl;
}

void Circle::input() {
    cout << "Enter radius: ";
    cin >> a;
}