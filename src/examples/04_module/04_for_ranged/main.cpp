#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	std::string name1;
	std::string name = "joe";

	
	loop_string_w_index(name);
	std::cout<<"\n\n";
	loop_string_for_range(name);
	return 0;
}