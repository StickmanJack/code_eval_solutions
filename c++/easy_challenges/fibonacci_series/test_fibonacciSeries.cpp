/*
Program: test_fibonacciSeries.cpp
Author: Seth Tucker
Date: 11/9/2016

Unit testing for fibonacciSeries.cpp
*/

#include "catchConfig.hpp"
#include "catch.hpp"
#include "test_fibonacciSeries.hpp"

TEST_CASE("Fibonacci numbers are computed", "[fibonacci]") {
	REQUIRE(computeFib(1) == 1);
	REQUIRE(computeFib(2) == 1);
	REQUIRE(computeFib(3) == 2);
	REQUIRE(computeFib(5) == 5);
	REQUIRE(computeFib(8) == 21);
	REQUIRE(computeFib(12) == 144);
	REQUIRE(computeFib(24) == 46368);
}