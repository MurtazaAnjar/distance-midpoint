#include "point.h"
#include <iostream>
#include <cmath>

Point::Point(double x_val, double y_val) : x(x_val), y(y_val) {}

double Point::getX() { return x; }
double Point::getY()  { return y; }

double Point::operator-(const Point &other) {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

bool Point::operator==(const Point &other) {
    return (x == other.x) && (y == other.y);
}

bool Point::operator!=(const Point &other) {
    return !(*this == other);
}

Point Point::operator/(const Point &other) {
    return Point((x + other.x) / 2, (y + other.y) / 2);
}

std::ostream& operator<<(std::ostream &os, const Point &p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}