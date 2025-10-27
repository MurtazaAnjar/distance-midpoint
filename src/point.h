#ifndef HELLO_WORLD_POINT_H
#define HELLO_WORLD_POINT_H
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double x_val = 0.0, double y_val = 0.0);
    double getX();
    double getY();
    double operator-(const Point &other);
    bool operator==(const Point &other);
    bool operator!=(const Point &other);
    Point operator/(const Point &other);
    friend std::ostream& operator<<(std::ostream &os, const Point &p);
};


#endif //HELLO_WORLD_POINT_H