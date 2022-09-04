/**
 * Basics - S1.2.1
 * C++ 14 
 * Examples for using namespace std
 */
#include <iostream>

int main()
{
	std::cout<<"In this example, using nameapce std is not used."<<std::endl;
	int xVal;
	std::cout<<"Enter a number between 1 and 50:"<<std::endl;
	std::cin>>xVal;

	std::cout<<"The number entered was "<<xVal<<std::endl;
	return 0;
}