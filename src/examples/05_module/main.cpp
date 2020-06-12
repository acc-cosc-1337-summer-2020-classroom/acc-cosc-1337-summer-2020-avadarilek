#include <iostream>
int main()
{
    int num = 10;
    int& num_ref = num;
    std::cout<<num<< "memory address is: "<<num_ref;
    num_ref = 20;

    return 0;
}