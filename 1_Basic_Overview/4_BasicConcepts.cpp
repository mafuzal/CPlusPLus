#include <iostream>
#include <climits>
//climits used for integer types 
//cfloat is found in floating point numbers 

using namespace std;
int main()
{
	cout <<"char:"<<sizeof(char)<<"bytes"<<"\n";
	cout <<"int:" <<sizeof(int)<<"bytes."<<"\n";
	cout <<"unsigned int:"<<sizeof(unsigned int)<<"bytes."<<"\n";
	cout <<"short:" <<sizeof(short)<<"bytes."<<"\n";
	cout <<"long:" <<sizeof(long)<<"bytes."<<"\n";
	cout <<"long long:" <<sizeof(long long)<<"bytes."<<"\n";
	cout <<"float:" <<sizeof(float)<<"bytes."<<"\n";
	cout <<"double:" <<sizeof(double)<<"bytes."<<"\n";
	cout <<"long double:" <<sizeof(long double)<<"bytes."<<"\n";
	
	cout <<"Minimum Values:\n";
	cout <<"char:" <<CHAR_MIN<< endl;
	cout <<"int:" <<INT_MIN<< endl;
	cout <<"short:" <<SHRT_MIN<< endl;
	cout <<"long:" <<LONG_MIN<< endl;
	cout <<"long long:" <<LLONG_MIN<< endl;

	cout <<"Maximum Values:\n";
	cout <<"char:" <<CHAR_MAX<< endl;
	cout <<"int:" <<INT_MAX<< endl;
	cout <<"short:" <<SHRT_MAX<< endl;
	cout <<"long:" <<LONG_MAX<< endl;
	cout <<"long long:" <<LLONG_MAX<< endl;
	
	
	int X_value = 55;
	double Y_value = 45.87;
	
	cout <<"Size of X_value: "<<X_value<< " is :"<<sizeof(X_value)<<"\n";
	cout <<"Size of Y_value: "<<Y_value<< " is :"<<sizeof(Y_value)<<"\n";
	
	//Constants - Value cannot change once declared!
	const double earth_gravity = 9.8;
	double mass = 0;
	cout <<"Enter Weight:\n";
	cin >> mass;
	cout <<"Weight Calculation = "<<mass * earth_gravity<<endl;
	
	
	return 0;
	
}