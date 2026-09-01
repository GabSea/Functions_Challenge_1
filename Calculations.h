//
// Created by CSStudent on 9/1/2026.
//

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <cmath>
#include <limits>
using namespace std;

// Circle
double calc_area(const double radius) {
    return M_PI * (radius * radius);
}
double calc_perimeter(const double radius) {
    return 2 * M_PI * radius;
}

// Rectangle
double calc_area(const double length, const double width) {
    return length * width;
}
double calc_perimeter(const double length, const double width) {
    return (length * 2) + (width * 2);
}

#endif //CALCULATIONS_H
