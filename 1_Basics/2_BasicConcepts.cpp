/*
 * Topics Covered:
 * 1.Namespaces 
 * 2.Basic I/O Concepts 
 */
#include <iostream>
using namespace std;

int main()
/*
 * Namespaces are used to reduce naming conflicts
 * 3rd-party frameworks may have their own definition of certain reserved words
 * :: - This is the scope resolution operator.
 * No need to use std:: everytime, but this may not be good in large files. 
 */
{
	int x,y,z;
	cout << "Enter a number to get its multiple of 6:";
	cin >> x;
	cout <<"Number you entered is: "<<x<<endl;
	cout << "6 X "<<x<<" = "<< 6*x<<endl;
	cout << "Enter two numbers y and z:\n";
	cin >> y >>z;
	cout << "Multiplication of "<<y<<" * "<<z<<" = "<<y*z<<"\n";
	return 0;
}


