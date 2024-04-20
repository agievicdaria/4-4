#pragma once
using namespace std;
#include "Figure.h"

class Trapezium : public Figure {
private:
    double b;
    double c;
    double d;
    double e;

public:
    Trapezium(double a, double b, double c, double d, double e) : Figure(a), b(b), c(c), d(d), e(e) {}
    double area() const override;
    double perimeter() const override;
    void print() const override;
    void input() override;
};
