#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

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

TEST_CASE("Test vector initial size") 
{
	Vector v(3);
	
	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test vector capacity") 
{
	Vector v(3);
	
	REQUIRE(v.Capacity() == 3);
}