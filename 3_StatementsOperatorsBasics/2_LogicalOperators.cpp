/**
 * Statements/Operators - S3.2
 * C++ 14 
 * Example of Logical Operators
 */
#include <iostream>
using namespace std;

int main()
{

	int num {};
	const int lower {50};
	const int upper {225};

	cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<" : ";
	cin >> num;

	bool within_bounds {false};
	within_bounds = (num > lower && num < upper);
	cout<<num<<" is between " <<lower<<" and "<<upper<<" : "<<within_bounds<<endl;

	bool outside_bounds {false};
	outside_bounds = (num <lower || num > upper);
	cout<<"num " << " is outside "<<lower<<" and "<<upper<<" : "<<outside_bounds<<"\n";

	cout<<"Enter an integer, the bounds are  "<<lower<<" and "<<upper<<" : \n";
	cin>>num;

	bool on_bounds {false};
	on_bounds = (num == lower || num == upper);
	cout<<num<<" is on one of the bounds which are "<<lower<<" and "<<upper<<" : "<<on_bounds<<endl;

	bool coat{false};
	double temperature{};
	int wind_speed {};

	const int wind_speed_for_coat{25};
	const double temperature_for_coat{45};

	cout<<"Enter current temperature: in (F) :\n";
	cin>>temperature;
	cout<<"Enter windspeed in (mph): ";
	cin>>wind_speed;

	coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
	cout<<"Do you need to wear a coat using OR?"<<coat<<endl;

	coat = (temperature < temperature_for_coat  && wind_speed > wind_speed_for_coat);
	cout<<"Do you need to wear a coat using AND?"<<coat<<endl;

	cout<<endl;
	return 0;

}