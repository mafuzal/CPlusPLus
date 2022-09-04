/**
 * Basics - S1.3
 * C++ 14 
 * Examples cin, cout
 */
#include <iostream>
using namespace std;

int main()
{
	cout<<"Good Morning ";
	cout<<"Good";
	cout<<" Morning "<<endl;

	cout<<"Good Morning "<<endl;
	cout<<"Good"<<" Morning "<<endl;
	cout<<"Good"<<" Morning \n";
	cout<<"Good\nMorning \n";

	int xVal;
	int yVal;
	double zVal;
	cout<<"Enter xVal between 1 and 10:";
	cin>>xVal;
	cout<<"xVal entered is "<<xVal<<endl;
	
	cout<<"Enter yVal between 1 and 200:";
	cin>>yVal;
	cout<<"xVal entered is "<<xVal<<"and yVal entered is "<<yVal<<endl;

	cout<<"Enter a double:";
	cin>>xVal;
	cout<<"double yVal entered is"<<yVal<<endl;

	int aVal;
	int bVal;
	cout<<"Enter two integers with a space:";
	cin>>aVal>>bVal;
	cout<<"aVal entered is "<<aVal<<"and bVal entered is "<<bVal<<endl;
	cout<<"Note:due to data already present in buffer, the above statement will have errors"<<endl;


	return 0;
}