#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test if a number is even")
{
	REQUIRE(is_even(4)== true);
}

TEST_CASE("test if a number is odd")
{
	REQUIRE(is_even(5)==false);
}

TEST_CASE("test get generation function")
{
	REQUIRE(get_generation(2010)== "Centenial");
}

TEST_CASE("Test switc menu function")
{
	REQUIRE(menu(1)== "Option 1");
}