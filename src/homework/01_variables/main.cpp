#include "variables.h"
#include <iostream>
#include <iomanip>

using std::cout;	using std::cin;

using std::setw;    using std:: setprecision;
using std::fixed;   using std::right;
int main()
{
	double meal_amount{0}, tip_rate{0}, tip_amount{0}, tax_amount{0}, total{0};

	cout<<"Enter meal amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter tip rate: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);


	total = meal_amount + tax_amount + tip_amount;

	cout<<"\n"<<right<<setw(10)<<"RECIEPT:\n";
	cout<<fixed<<setprecision(2);
	cout<<setw(14)<<"Meal Amount: "<<"$"<<right<<setw(6)<<meal_amount<<"\n";
	cout<<setw(14)<<"Sales Tax: "<<"$"<<right<<setw(6)<<tax_amount<<"\n";
	cout<<setw(14)<<"Tip Amount: "<<"$"<<right<<setw(6)<<tip_amount<<"\n";
	cout<<setw(14)<<"Total: "<<"$"<<right<<setw(6)<<total<<"\n";

	return 0;
}
