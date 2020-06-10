#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"


int operator_precedence_1(int num1, int num2, int num3)
{
    return num1 + num2 / num3;
}
double convert_int_to_double(int year, double interest_rate)
{
    return year * interest_rate;



int int_overflow()
{
    int num = 2147483647 + 1;
    return num;
}

int static_cast_double_int(double num)
{
	int n = static_cast<int>(num);
	return n;
}


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*Test case operator precedence 1 with function argument values 12, 6 and 3 returns 14*/
TEST_CASE("Test operator precedence 1 with arguments: 12, 6, and 3 returns 14")
{
	REQUIRE(operator_precedence_1(12, 6, 3) == 14);
}
/*Test case operator precedence 2 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case convert_to_double to show that multiplying int and double returns a double*/

TEST_CASE("Test convert into to double implicitly")
{
	REQUIRE(convert_int_to_double(10, .15)== 1.5);

}

/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/

/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/

TEST_CASE("test double to int with static_cast")
{
	REQUIRE(static_cast_double_int(55.5)== 55);
}

/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/

TEST_CASE("Test int overflow")
{
	REQUIRE(int_overflow()= 2147483648);
}

/*Test get radius of a circle with 10 to show that it returns 314.159*/

/*Test int data size */

/*Test multi assign addition*/

