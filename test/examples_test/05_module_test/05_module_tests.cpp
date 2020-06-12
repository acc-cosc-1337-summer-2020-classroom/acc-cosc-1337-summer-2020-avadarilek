#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "payroll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get fica tax rate")
{
	REQUIRE(get_fica_tax_total(100)== 6.2);
}

TEST_CASE("Test regular pay function")
{
	REQUIRE(get_regular_pay(-5, 10) == 0);
	REQUIRE(get_regular_pay(30, 10) == 300);
	REQUIRE(get_regular_pay(50, 10) == 400);

}

TEST_CASE("Test ovetime function")
{
	REQUIRE(get_ot_pay(30, 10) == 0);
	REQUIRE(get_ot_pay(50, 10)== 150);
}