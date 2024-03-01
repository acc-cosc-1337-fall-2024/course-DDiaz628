#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test display_for_range") {
	string lang = "C++";
	display_for_range(lang);

	REQUIRE(lang == "C++");
}

TEST_CASE("Test display_for_range_ref") {
	string lang = "C++";
	display_for_range_ref(lang);

	REQUIRE(lang == "zzz");
}
