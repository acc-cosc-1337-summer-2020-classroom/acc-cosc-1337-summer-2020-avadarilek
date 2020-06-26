//write include statements
#include<iostream>
#include"dna.h"
#include <string>

//write using statements
using std::cout;		using std::cin;		using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int user_input;
	string dna_string;
	char y_or_n;

	do
	{
		cout<<"Enter DNA string";
		cin>>dna_string;

		cout<<"Enter 1 to get GC content, or 2 to get DNA complement. \n";
		cin>>user_input;
		
		

		if(user_input == 1)
		{
			cout<<"GC content: "<<get_gc_content(dna_string);
		}
		else
		{
			cout<<"DNA complement: "<< get_dna_complement(dna_string);
		}
		

		cout<<"Enter y to enter more DNA. If you are done, enter n";
		cin>>y_or_n;
		
	}while(y_or_n == 'Y' || y_or_n == 'y');
		
	
	return 0;
}