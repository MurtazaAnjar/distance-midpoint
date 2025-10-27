#include <iostream>
#include "src/point.h"


int main() {
  Point p1(3.2, 9.8);
  Point p2(5.5, -1.2);

  std::cout << p1 - p2 << std::endl;
  std::cout << (p1 == p2) << std::endl;
  std::cout << (p1 != p2) << std::endl;
  std::cout << (p1 / p2) << std::endl;

  return 0;
}