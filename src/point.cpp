#include "point.h"
#include <iostream>

Point(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

double operator-(const Point &other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

bool Point::operator==(const Point &other) const {
    return (x == other.x) && (y == other.y);
}

bool Point::operator!=(const Point &other) const {
    return !(*this == other);
}

Point Point::operator/(const Point &other) const {
    return Point((x + other.x) / 2, (y + other.y) / 2);
}

std::ostream& Point::operator<<(std::ostream &os, const Point &p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}