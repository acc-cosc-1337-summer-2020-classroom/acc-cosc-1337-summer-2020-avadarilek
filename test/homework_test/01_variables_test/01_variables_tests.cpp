#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify that the function get_sales_tax_amount with parameter 10 returns .675, and parameter 20 returns 1.35") 
{
	REQUIRE(get_sales_tax_amount(10)== .675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("Verify that function get_tip_amount function with parameters 20 and 15% returns 3, and parameter 20 and 20% returns 4")
{
	REQUIRE(get_tip_amount(20, .15) == 3);
	REQUIRE(get_tip_amount(20, .2) == 4);

}