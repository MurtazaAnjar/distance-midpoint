#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.h"

#include "catch2/catch_approx.hpp"

TEST_CASE("Point operator overloads") {
    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);

    // Test distance (-)
    double distance = p1 - p2;
    REQUIRE(distance == Catch::Approx(11.2379));

    // Test equality (==)
    Point p3(3.2, 9.8);
    REQUIRE(p1 == p3);

    // Test inequality (!=)
    REQUIRE(p1 != p2);

    // Test midpoint (/)
    Point midpoint = p1 / p2;
    REQUIRE(midpoint.getX() == 4.35);
    REQUIRE(midpoint.getY() == Catch::Approx(4.3));

    // Test output stream (<<)
    std::ostringstream oss;
    oss << p1;
    REQUIRE(oss.str() == "(3.2, 9.8)");
}