#include "variables.h"

const double TAX_RATE = .0675;

double get_sales_tax_amount(double meal_amount)
{
	double tax = TAX_RATE * meal_amount;
	return tax;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	double tip = meal_amount * tip_rate;

	return tip;
}
