#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "static.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("val_ref") {//copy parameter
	int num = 5; //function local variable
	value_params(num);
	
	REQUIRE(num == 5);
}

TEST_CASE("test reference_params") {
	int num = 5; //local reverence variable
	reference_params(num);//pass the address where num is stored
	REQUIRE(num == 10);
}

TEST_CASE("test get_gross_pay w 2 param") {
	REQUIRE(get_gross_pay(40, 20) == 800);
}

TEST_CASE("test get_gross_pay w 1 param") {
	REQUIRE(get_gross_pay(12000) == 1000);
}