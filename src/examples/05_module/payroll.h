#include <iostream>
#include <iomanip>
//
/*
Write double return-value function gross_pay with int parameter(hour) and double parameter (rate)
*/


double get_fica_tax_total(double gross_pay);

double get_regular_pay(int hours, double rate);

double get_ot_pay(int hours, double rate);

void display_pay(int hours, double rate);