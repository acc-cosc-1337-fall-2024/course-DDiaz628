#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test implicit data type casting","Verify that ints are converted to doubles at runtime") {
	REQUIRE(convert_to_double(10,.5) == 5.0);
}

TEST_CASE("Test implicit data type casting double to int","Verify that double to int converstion") {
	REQUIRE(convert_double_to_int(10.99) == 10);
}