#include <iostream>
#include "geometry.h"

int main() {
    double side = 4.0;
    double radius = 3.0;
    double base = 4.0, height = 5.0;
    double a = 3.0, b = 4.0, c = 5.0;

    std::cout << "Available shapes:\n";
    for (const auto& shape : Geometry::listShapes()) {
        std::cout << "- " << shape << "\n";
    }
    
    // Расчеты для квадрата
    std::cout << "Square Area: " << Geometry::squareArea(side) << "\n";
    std::cout << "Square Perimeter: " << Geometry::squarePerimeter(side) << "\n";

    // Расчеты для круга
    std::cout << "Circle Area: " << Geometry::circleArea(radius) << "\n";
    std::cout << "Circle Perimeter: " << Geometry::circlePerimeter(radius) << "\n";

    // Расчеты для треугольника
    std::cout << "Triangle Area: " << Geometry::triangleArea(base, height) << "\n";
    std::cout << "Triangle Perimeter: " << Geometry::trianglePerimeter(a, b, c) << "\n";

    return 0;
}