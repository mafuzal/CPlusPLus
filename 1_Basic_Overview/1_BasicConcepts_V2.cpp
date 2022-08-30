/*
 * Topics Covered:
 * 1.Namespaces 
 */
#include <iostream>
//Use only what is needed from namespace 
//Advantage is the cout,cin,endl will not require scopr resolution operator 
using std::cout;
using std::cin;
using std::endl;

int main()
/*
 * Namespaces are used to reduce naming conflicts
 * 3rd-party frameworks may have their own definition of certain reserved words
 * :: - This is the scope resolution operator.
 * No need to use std:: everytime, but this may not be good in large files. 
 */
{
	int x;
	cout << "Enter a number to get its multiple of 6:";
	cin >> x;
	cout <<"Number you entered is: "<<x<<endl;
	cout << "6 X "<<x<<" = "<< 6*x<<endl;
	return 0;
}


