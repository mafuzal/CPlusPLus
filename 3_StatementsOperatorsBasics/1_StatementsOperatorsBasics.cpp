/**
 * Statements/Operators - S3.1
 * C++ 14 
 * Example of Statements/Operators
 */
#include <iostream>
using namespace std;

int main()
{
	cout<<"_______________________________"<<endl;
	cout<<"Assignment Operator"<<endl;
	// Assignment Operator 
	int x1 {100};
	int x2 {200};

	x1 = 500;
	cout<<"x1: "<<x1<<endl;
	cout<<"x2: "<<x2<<endl;

	x1 = x2 = 500;
	cout<<"x1: "<<x1<<endl;
	cout<<"x2: "<<x2<<endl;
	
	x1 = 250;
	x2 = x1;
	cout<<"x1: "<<x1<<endl;
	cout<<"x2: "<<x2<<endl;
	
	cout<<"_______________________________"<<endl;
	cout<<"Arithmetic Operators "<<endl;
	// Arithmetic Operators 
	int y1 {385};
	int y2 {214};
	int result{0};
	cout<<"y1 + y2 = "<<y1+y2<<endl;

	result = y1 + y2;
	cout<<"y1 + y2 = "<<result<<endl;
	result = y1 - y2;
	cout<<"y1 - y2 = "<<result<<endl;
	result = y1 * y2;
	cout<<"y1 * y2 = "<<result<<endl;
	result = y1 / y2;
	cout<<"y1 / y2 = "<<result<<endl;
	result = y1 % y2;
	cout<<"y1 % y2 = "<<result<<endl;

	cout<<"_______________________________"<<endl;
	cout<<"Kilometers to Miles "<<endl;
	// Kilometers to Miles 
	const double conv {0.621371};
	cout<<"Enter the distance in (km) to convert.\n";
	double distKM;
	double distMiles;
	cin>>distKM;
	distMiles = distKM * conv;
	cout<<distKM<<"km = "<<distMiles<<"Miles." <<endl;

	cout<<"_______________________________"<<endl;
	cout<<"Increment and decrement"<<endl;
	//Increment and decrement 
	int counter{55};
	int result2{0};

	cout<<"Counter:"<<counter<<endl;
	counter = counter + 1; 
	cout<<"Counter:"<<counter<<endl;
	counter++; 
	cout<<"Counter:"<<counter<<endl;
	++counter; 
	cout<<"Counter:"<<counter<<endl;

	cout<<"_______________________________"<<endl;
	cout<<"Pre-Increment Example 1"<<endl;
	counter = 55;
	cout<<"Counter:"<<counter<<endl;
	
	result2 = ++counter;
	cout<<"Counter:"<<counter<<endl;
	cout<<"Result:"<<result2<<endl;


	cout<<"Post-Increment Example 1"<<endl;
	counter = 55; result2 = 0;
	cout<<"Counter:"<<counter<<endl;
	
	result2 = counter++;
	cout<<"Counter:"<<counter<<endl;
	cout<<"Result:"<<result2<<endl;

	cout<<"_______________________________"<<endl;
	cout<<"Example 2"<<endl;
	counter = 55; result2 = 0;
	cout<<"Counter:"<<counter<<endl;
	
	result2 = counter + 10;
	cout<<"Counter:"<<counter<<endl;
	cout<<"Result:"<<result2<<endl;

	cout<<"Pre-Increment Example 2"<<endl;
	counter = 55; result2 = 0;
	cout<<"Counter:"<<counter<<endl;
	
	result2 = ++counter + 10;
	cout<<"Counter:"<<counter<<endl;
	cout<<"Result:"<<result2<<endl;


	cout<<"Post-Increment Example 2"<<endl;
	counter = 55; result2 = 0;
	cout<<"Counter:"<<counter<<endl;
	
	result2 = counter++ + 10;
	cout<<"Counter:"<<counter<<endl;
	cout<<"Result:"<<result2<<endl;

	cout<<"_______________________________"<<endl;
	cout<<"Mixed Type Expressions"<<endl;
	int total{};
	int z1{},z2{},z3{};
	const int count{3};

	cout<<"Enter 3 integers with space after each:\n";
	cin>>z1>>z2>>z3;

	total = z1 + z2 + z3;
	double average{0.0};

	average = static_cast<double>(total)/count;
	//average = (double)total/count; Old-Style 
	cout<<"Three numbers entered are: "<<z1<<","<<z2<<","<<z3<<endl;
	cout<<"The sum of three numbers is:"<<total<<endl;
	cout<<"The average of the numbers is:"<<average<<endl;


	cout<<"_______________________________"<<endl;
	cout<<"Equal Operators"<<endl;
	bool equal_result {false};
	bool not_equal_result {false};

	int f1{}, f2{};

	cout<<"Enter two Integers separated by space:\n";
	cin>>f1>>f2;
	equal_result = (f1==f2);
	not_equal_result = (f1!=f2);
	cout<<"Comparison result (equals) : "<<equal_result<<endl;
	cout<<"Comparison result (not equals) : "<<not_equal_result<<endl;

	char c1{}, c2{};
	cout<<"Enter two chars separated by space:\n";
	cin>>c1>>c2;
	equal_result = (c1==c2);
	not_equal_result = (c1!=c2);
	cout<<"Comparison result (equals) : "<<equal_result<<endl;
	cout<<"Comparison result (not equals) : "<<not_equal_result<<endl;

	double d1{}, d2{};
	cout<<"Enter two doubles separated by space:\n";
	cin>>d1>>d2;
	equal_result = (d1==d2);
	not_equal_result = (d1!=d2);
	cout<<"Comparison result (equals) : "<<equal_result<<endl;
	cout<<"Comparison result (not equals) : "<<not_equal_result<<endl;

	cout<<"Enter an integer and double separated by space:\n";
	cin>>f1>>d1;
	equal_result = (f1==d1);
	not_equal_result = (f1!=d1);
	cout<<"Comparison result (equals) : "<<equal_result<<endl;
	cout<<"Comparison result (not equals) : "<<not_equal_result<<endl;


	cout<<"_______________________________"<<endl;
	cout<<"Relational Operators"<<endl;
	int k1{}, k2{};
	cout<<"Enter two integers separated by space\n";
	cin>>k1>>k2;
	cout<<"[k1 > k2] = "<<(k1 > k2)<<endl;
	cout<<"[k1 >= k2] = "<<(k1 >= k2)<<endl;
	cout<<"[k1 < k2] = "<<(k1 < k2)<<endl;
	cout<<"[k1 <= k2] = "<<(k1 <= k2)<<endl;

	const int lower{50};
	const int upper{100};

	cout<<"Enter an inetger that is greater than "<<lower<<":\n";
	cin>>k1;
	cout<<k1<<" > "<< lower << " is "<<(k1 > lower)<<endl;

	cout<<"Enter an inetger that is less  than or equal to "<<upper<<":\n";
	cin>>k1;
	cout<<k1<<" <= "<< upper << " is "<<(k1 <= upper)<<"\n";
	return 0;
}