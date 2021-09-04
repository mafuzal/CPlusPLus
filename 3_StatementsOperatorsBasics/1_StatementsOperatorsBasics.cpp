#include <iostream>
using namespace std;

int main()
{
	int num1 = 100;
	int num2 = 200;

	num1 = 1000;
	cout<<"num1 is"<<num1<<endl;
	cout<<"num2 is"<<num2<<endl;
	cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;

	int result = 0;
	result = num1 + num2;
	cout<<num1<<" + "<<num2<<" = "<<result<<endl;

	result = num1 - num2;
	cout<<num1<<" - "<<num2<<" = "<<result<<endl;

	result = num1 * num2;
	cout<<num1<<" * "<<num2<<" = "<<result<<endl;

	result = num1 / num2;
	cout<<num1<<" / "<<num2<<" = "<<result<<endl;

	result = num1 % num2;
	cout<<num1<<" % "<<num2<<" = "<<result<<endl;

	result = num1*10 + num2;

	cout<<5/10<<endl;

	cout<<5.0/10.0<<endl;


	const double usd_per_cad = 1.26;
	cout<<"Welcome to USD to CAD converter:"<<endl;
	cout<<"Enter the values in USD:"<<endl;
	double usdAmount = 0.0;
	double cadAmount = 0.0;
	cin>>usdAmount;
	cadAmount = usdAmount * usd_per_cad;
	cout<<usdAmount<< " US$ is equivalent to:"<<cadAmount<<" CAD$"<<endl;

	int count = 0;

	cout<<"Increment Opearator can be: count + 1 "<<count+1<<endl;
	cout<<"Increment Opearator can also be: count++ "<<count++<<endl;
	cout<<"Increment Opearator can also be: ++count"<<++count<<endl;

	//Pre-increment Operator: 
	cout<<"Pre-Increment:"<<endl;
	count = 10;
	result = 0;
	result = ++count; //note the preincrement;
	//I want to increment counter before I use it, and then save it 
	cout<<"Count:"<<count<<endl;
	cout<<"Result:"<<result<<endl;

	//Post-increment Operator: 
	cout<<"Post-Increment:"<<endl;
	count = 10;
	result = 0;
	result = count++; //note the preincrement;
	cout<<"Count:"<<count<<endl;
	cout<<"Result:"<<result<<endl;
	
	cout<<"Example 4:Pre-Increment Operator"<<endl;
	count = 10;
	result = 0;
	cout<<"Count:"<<count<<endl;
	result = ++count +10;
	cout<<"Count : "<<count<<endl;
	cout<<"Result : "<<result<<endl;
	
	cout<<"Example 5:Post-Increment Operator"<<endl; 
	count = 10;
	result = 0;
	cout <<"Count :"<<count<<endl;
	result = count++ + 10;
	cout <<"Count :"<<count<<endl;
	cout <<"Result :"<<result<<endl;
	
	
	cout<<"Mixed Type Conversions"<<endl;
	int total;
	int num10 = 0;
	int num11 = 0;
	int num12 = 0;
	
	const int counter = 3;
	cout<<"Enter 3 integers separated by spaces: ";
	cin>> num10>>num11>>num12;
	
	total = num10 + num11 + num12;
	double average = 0.0;
	
	average = static_cast<double>(total)/counter;
	//average = (double)(total)/counter; Old C++ Style 

	
	cout<<"The average is:"<<average<<endl;
	
	cout<<"====================:"<<endl;
	cout<<"Testing for Equality:"<<endl;
	cout<<"====================:"<<endl;
	
	bool equal_result = false;
	bool not_equal_result = false;
	
	cout<<boolalpha;
	cout<<"Enter two integers separated by a space: ";
	cin>>num1>>num2;
	
	equal_result = (num1 == num2);
	not_equal_result = (num1!=num2);
	cout<<"Comparison result (equals):"<<equal_result<<endl;
	cout<<"Comparison result (not equals):"<<not_equal_result<<endl;

	
	char char1;
	char char2;
	cout<<"Enter two characters separated by a space:";
	cin>>char1>>char2;
	equal_result = (char1 == char2);
	not_equal_result = (char1!=char2);
	cout<<"Comparison result (equals):"<<equal_result<<endl;
	cout<<"Comparison result (not equals):"<<not_equal_result<<endl;
	
	double double1 = 0;
	double double2 = 0;
	cout<<"Enter two doubles separated by a space:";
	cin>>double1>>double2;
	equal_result = (double1 == double2);
	not_equal_result = (double1 != double2);
	cout<<"Comparison result (equals):"<<equal_result<<endl;
	cout<<"Comparison result (not equals):"<<not_equal_result<<endl;
	
	cout<<"Enter an integer and a double separated by space:";
	cin>>num1>>double1;
	equal_result = (num1 == double1);
	not_equal_result = (num1 != double1);
	cout<<"Comparison result (equals):"<<equal_result<<endl;
	cout<<"Comparison result (not equals):"<<not_equal_result<<endl;
	
	
	cout<<"====================:"<<endl;
	cout<<"Relational Opeartors:"<<endl;
	cout<<"====================:"<<endl;
	
	cout<<"Enter 2 integers separated by a space:";
	cin>>num1>>num2;
	cout<<num1<<" > "<<num2<<" : "<<(num1 > num2)<<endl;
	cout<<num1<<" >= "<<num2<<" : "<<(num1 >= num2)<<endl;
	cout<<num1<<" < "<<num2<<" : "<<(num1 < num2)<<endl;
	cout<<num1<<" <= "<<num2<<" : "<<(num1 <= num2)<<endl;
	
	const int lower = 10;
	const int upper = 20;
	cout <<"\nEnter an integer that is greater than "<<lower<<":";
	cin>>num1;
	cout<<num1<<" > "<<lower<<" is "<<(num1 > lower)<<endl;
	
	cout <<"\nEnter an integer that is less than or equal to "<<upper<<":";
	cin>>num1;
	cout<<num1<<" > "<<upper<<" is "<<(num1 <= upper)<<endl;

	cout<<endl;
	cout<<endl;

	return 0;

}
