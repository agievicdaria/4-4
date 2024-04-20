#pragma once
using namespace std;
#include "Figure.h"

class Circle : public Figure {

public:
    Circle(double a) : Figure(a) {}
    double area() const override;
    double perimeter() const override;
    void print() const override;
    void input() override;
};
