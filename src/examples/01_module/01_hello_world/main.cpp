#include<iostream>
#include "hello.h"

using namespace std;
using std::cout;     using std::cin;

int main() 
{
	int num1;
	auto num2 = 0;
	auto num3 = 0;
	cout<<"Enter Salary: ";
	cin>>num1;
	cout<<"Enter 24 or 26 weeks: ";
	cin>>num2;

	double result = calculate_paycheck(num1, num2);
	cout<<"Weekly payrate is: "<<result<<"\n";


	if (num2 == 26)
		int num3 = 24;
	else
		int num3 = 26;
	
	result = calculate_paycheck(num1, num3);
	cout<<"Monthly payrate is: "<<result;
	
	return 0;
}