#include<iostream>
#include<string>
#include<iomanip>
using std::cout; using std::cin; using std::string;
using std::fixed;	using std::setprecision;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;
	char message;

	do
	{
		cout << "Enter letter grade: ";
		cin >> letter_grade;
		cout << "Enter credit hours: ";
		cin >> credit_hours;
		sum_credit_points += get_grade_points(letter_grade) * credit_hours;
		sum_credit_hours += credit_hours;


		cout<< "Enter another grade? (y/n)";
		cin>>message;
	}
	while ((message == 'Y') || (message == 'y'));
	
	
	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "\nGPA: "<<fixed << setprecision(2)<< gpa << "\n";

	return 0;
} 