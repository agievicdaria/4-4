#pragma once
using namespace std;

class Figure {
protected:
    double a;
public:
    Figure(double a) : a(a) {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void print() const = 0;
    virtual void input() = 0;
};

