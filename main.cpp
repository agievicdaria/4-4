#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezium.h"
using namespace std;

void printFigureInfo(const Figure& fig) {
    fig.print();
    cout << "Type of figure: " << typeid(fig).name() << endl;  
    cout << "Area: " << fig.area() << endl;
    cout << "Perimeter: " << fig.perimeter() << endl;
    cout << endl;
}

int main() {
    Rectangle rectangle(3, 4);
    Circle circle(5);
    Trapezium trapezium(2, 4, 3, 5, 6);

    Figure* rectanglePointer = &rectangle;
    Figure* circlePointer = &circle;
    Figure* trapeziumPointer = &trapezium;

    cout << "Enter dimensions for Rectangle:" << endl;
    rectanglePointer->input();
    cout << "Enter radius for Circle:" << endl;
    circlePointer->input();
    cout << "Enter dimensions for Trapezium:" << endl;
    trapeziumPointer->input();

    cout << "Rectangle Info:" << endl;
    printFigureInfo(*rectanglePointer);
    cout << "Circle Info:" << endl;
    printFigureInfo(*circlePointer);
    cout << "Trapezium Info:" << endl;
    printFigureInfo(*trapeziumPointer);

    cout << "Rectangle Info:" << endl;
    printFigureInfo(rectangle);
    cout << "Circle Info:" << endl;
    printFigureInfo(circle);
    cout << "Trapezium Info:" << endl;
    printFigureInfo(trapezium);

    return 0;
}
