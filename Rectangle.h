#pragma once
using namespace std;
#include "Figure.h"

class Rectangle : public Figure {
private:
    double b;

public:
    Rectangle(double a, double b) : Figure(a), b(b) {}
    double area() const override;
    double perimeter() const override;
    void print() const override;
    void input() override;
};
