/*
 * Topics Covered:
 * 1.Pre-Processor
 * 2.Main Types
 */
#include <iostream>
/*
Note: #include is a type of pre-processor directive
Preprocesors are programs that processes the source code before
compiler sees them. Other examples of pre-processor are
#ifdef, #indef, #define, #undef, #if, #elif, #else, #endif
 */
int main()
/*
 * This is the main function.
 * It is a special function, and every program must have excatly 1 main function.
 * It is the starting point of a program excution.
 * It will return 0 for succesful program execution.
 * Consider the other main declration
 * int main( int argc, char *argv[])
 * argc is argument count and argv is argument vector
 */
{
	int x;
	std::cout << "Enter a number to get its multiple of 5:";
	std::cin >> x;
	std::cout <<"Number you entered is: "<<x<<std::endl;
	std::cout << "5 X "<<x<<" = "<< 5*x<<std::endl;
	return 0;
}

