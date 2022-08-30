#include <iostream>
using namespace std;

// This info has to go to notes 
int main()
{
	char color = 'R'; //Later try to understand why "Red" gives warning 
	cout <<"Like  "<<color<<"\n";
	
	unsigned short int grade = 95;
	cout <<"Grade  "<<grade<<"\n";
	
	int number_of_counties = 200;
	cout<< "Total Number of Counties: "<< number_of_counties << "\n";
	
	long population_on_earth = 7794798739;
	cout << "Population on earth:" << population_on_earth << "\n";
	
	long long light_year_in_km = 9460730777120;
	cout << "The light year in km: "<<light_year_in_km<<" km.\n";
	
	float monthly_expenses = 800.56;
	cout << "Monthly Expenses:" << monthly_expenses <<"\n";
	
	double gravitaional_force_on_mars = 3.721;
	cout<<"Gravity on Mars:"<< gravitaional_force_on_mars <<"\n";
	
	long double random_large_no = 9.78e120;
	cout << "Random Large Number:"<<random_large_no<<"\n";
	
	bool ucl2021 = false;
	cout<<"The 2021 Champions League was won by AXCZ which is "<<ucl2021<<"\n";	
	
	//Overflow Example
	
	short a1 = 80000;
	short a2 = 6000;
	
	short a3 = a1 * a2;
	
	cout << "The product of " <<a1<< " * "<<a2<<" = "<<a3<<"\n";
	
	

	return 0;
	
}