/*
 * Topics Covered:
 * 1.Namespaces 
 * 2.Basic I/O Concepts 
<<<<<<< HEAD
 * 3.Global Variables
 */
#include <iostream>
using namespace std;
int constantMultiplier = 10;
=======
 */
#include <iostream>
using namespace std;

>>>>>>> df3a72e582d64972713f6311635c51df629ded6b
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
<<<<<<< HEAD
	cout << "Result of Constant Multiplier = "<<constantMultiplier*y*z<<"\n"; 
=======
>>>>>>> df3a72e582d64972713f6311635c51df629ded6b
	return 0;
}


