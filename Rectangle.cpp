#include "Rectangle.h"
#include <iostream>
using namespace std;

double Rectangle::area() const {
    return a * b;
}

double Rectangle::perimeter() const {
    return 2 * (a + b);
}

void Rectangle::print() const {
    cout << "Rectangle" << endl;
}

void Rectangle::input() {
    cout << "Enter height: ";
    cin >> a;
    cout << "Enter width: ";
    cin >> b;
}