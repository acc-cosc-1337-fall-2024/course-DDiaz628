#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test reference param") 
{
	int num = 5;
	ref_param(num);
	REQUIRE(num == 20);
}

TEST_CASE("Test pointer param") 
{
	int num = 5;
	ptr_param(&num);
	REQUIRE(num == 30);
}