/**
 * Statements/Operators - S3.3
 * C++ 14 
 * Example of Statements/Operators
 */
#include <iostream>
using namespace std;

int main()
{
	// Conversion Value in Cents
	const int dollarValue {100};
	const int quarterValue{25};
	const int dimeValue {10};
	const int nickelValue {5};

	int changeAmount {0}; 

	cout<<"Enter an amount in cents:\n";
	cin>>changeAmount;
	cout<<"Method 1: Without using modulus operator.";
	int balance {0};
	int dollars {0};
	int quarters {0};
	int dimes {0};
	int nickels {0};
	int pennies {0};

	dollars = changeAmount / dollarValue; 
	balance = changeAmount - (dollars * dollarValue);
	
	quarters = balance / quarterValue;
	balance = balance - (quarters * quarterValue);

	dimes = balance / dimeValue;
	balance = balance - (dimes * dimeValue);

	nickels = balance / nickelValue; 
	balance = balance - (nickels * nickelValue);

	pennies = balance;
	cout<<"You can provide this change as follows: \n";
	cout<<"dollars		:"<<dollars<<endl;
	cout<<"quarters		:"<<quarters<<endl;
	cout<<"dimes		:"<<dimes<<endl;
	cout<<"nickels		:"<<nickels<<endl;
	cout<<"pennies		:"<<pennies<<endl;

	cout<<"Option with Modulus Operator:\n";

	balance = 0;
	dollars = 0;
	quarters = 0;
	dimes = 0;
	nickels = 0;
	pennies = 0;

	dollars = changeAmount / dollarValue;
	balance = changeAmount % dollarValue;

	quarters = balance / quarterValue;
	balance = balance % quarterValue;

	dimes = balance / dimeValue;
	balance = balance % dimeValue;

	nickels = balance / nickelValue;
	balance = balance % nickelValue;

	pennies = balance;

	cout<<"You can provide this change as follows: \n";
	cout<<"dollars		:"<<dollars<<endl;
	cout<<"quarters		:"<<quarters<<endl;
	cout<<"dimes		:"<<dimes<<endl;
	cout<<"nickels		:"<<nickels<<endl;
	cout<<"pennies		:"<<pennies<<endl;
	return 0;
}