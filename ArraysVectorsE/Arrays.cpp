#include <iostream>
using namespace std;
// Arrays are fuxed size 
//Elements are all the same type and stored contiguously in memory 
int main()
{
	char characters [] = {'f','o','o','d'};
	cout <<"The first word is: "<<characters[0]<<"\n";
	cout <<"The last word is: "<<characters[3]<<"\n";

	double weightVector [] = {96.8, 88.2, 77.8, 95.9, 78.5};
	cout << "The last weight entry is: "<<weightVector[4]<<endl;
	weightVector[4] = 73.5;
	cout << "The last weight entry is: "<<weightVector[4]<<endl;

	double temperature [] = {23.5, 34.6, 29.8, 22.1,27.7};
	cout << "Week 36 Monday Temperature: "<<temperature[0]<<endl;
	cout << "Week 36 Tuesday Temperature: "<<temperature[1]<<endl;
	cout << "Week 36 Wednesday Temperature: "<<temperature[2]<<endl;
	cout << "Week 36 Thursday Temperature: "<<temperature[3]<<endl;
	cout << "Week 36 Friday Temperature: "<<temperature[4]<<endl;

	cout<<"Week 37 Temperature Update:\n";
	cin >> temperature[0];
	cin >> temperature[1];
	cin >> temperature[2];
	cin >> temperature[3];
	cin >> temperature[4];

	cout << "Week 36 Monday Temperature: "<<temperature[0]<<endl;
	cout << "Week 36 Tuesday Temperature: "<<temperature[1]<<endl;
	cout << "Week 36 Wednesday Temperature: "<<temperature[2]<<endl;
	cout << "Week 36 Thursday Temperature: "<<temperature[3]<<endl;
	cout << "Week 36 Friday Temperature: "<<temperature[4]<<endl;
	
	
	int ab[3][4] = {
			{0, 1, 2, 3},
			{4, 5, 6, 7},
			{8, 9, 10, 11}
	};
	
	cout<<"ab[2][1] :"<<ab[2][1]<<endl;

	return 0;

}