#include <iostream>
using namespace std;

int main()
{
	//Not has higher precdence than and 
	//and has higher precedence than or 
	//not is a unary operator 
	//and and or are binary operators 

	int num;
	const int lower = 10;
	const int upper = 20;

	cout<<boolalpha;

	//Determine if an eneterd integer is between two other integers 
	//Assume lower<upper

	cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<":";
	cin>>num;

	bool within_bounds = false;
	within_bounds = (num > lower && num < upper);
	cout<<num<<" is between "<<lower<<" and "<<upper<<" : "<<within_bounds<<endl;

	//Determine if an entered integer is outside two othwe integers 
	//Assume lower < upper 
	cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<":";
	cin>>num;

	within_bounds = (num < lower || num > upper);
	cout<<num<<" is outside "<<lower<<" and "<<upper<<" : "<<within_bounds<<endl;


	//Determine if an eneterd integer is exactly on the boundary 
	//Assume lower < upper 
	cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<":";
	cin>>num;

	within_bounds = (num == lower || num == upper);
	cout<<num<<" is on one of the bounds which are "<<lower<<" and "<<upper<<" : "<<within_bounds<<endl;

	//Determine if you need to wear a coat based on temperature and wind speed 
	bool wear_coat = false;
	double temperature;
	int wind_speed;

	const int wind_speed_for_coat = 25;
	const double temperature_for_coat = 45;
	//Require a coat if either wind is too high OR temperature is too low
	cout<<"Enter the current temperature in (F):";
	cin>>temperature;
	cout<<"Enter windspeed in (mph)";
	cin>>wind_speed;

	wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
	cout<<"Do you need to wear a coat using OR?"<<wear_coat<<endl;

	//Require a coat if BOTH the windspeed is too high AND temperature is too low 
	wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
	cout<<"Do you need to wear a coat using AND?"<<wear_coat<<endl;

	cout<<endl;

	return 0;

}