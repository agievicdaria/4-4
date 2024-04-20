#include "Trapezium.h"
#include <iostream>
using namespace std;

double Trapezium::area() const {
    return (b + c) * a / 2;
}

double Trapezium::perimeter() const {
    return b + c + d + e;
}

void Trapezium::print() const {
    cout << "Trapezium" << endl;
}

void Trapezium::input() {
    cout << "Enter side1: ";
    cin >> b;
    cout << "Enter side2: ";
    cin >> c;
    cout << "Enter base3: ";
    cin >> d;
    cout << "Enter base4: ";
    cin >> e;
    cout << "Enter height: ";
    cin >> a;
}