/**
 * Arrays/Vectors - S2.2.1
 * C++ 14 
 * Example of Vectors
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//Vector Declaration:
	vector<char> aChars {'a', 'b', 'c', 'd', 'e', 'f'};
	cout<<"The first char is:"<<aChars[0]<<"\n";
	cout<<"The last char is:"<<aChars[5]<<"\n";
	
	vector<double> gameScores {12.1, 15.1, 52.3, 41.8};
	cout<<"The highest score is: "<<gameScores[2]<<" and the least score is: "<<gameScores[0]<<"\n";
	cout<<"Using vector.at(), the highest score is: "<<gameScores.at(2)<<" and the least score is: "<<gameScores.at(0)<<"\n";

	vector<int>weeklyTemperatures {28, 26, 27, 29, 30};
	cout<<"Monday Temperature	:"<<weeklyTemperatures.at(0)<<"\n";
	cout<<"Tuesday Temperature	:"<<weeklyTemperatures.at(1)<<"\n";
	cout<<"Wednesday Temperature:"<<weeklyTemperatures.at(2)<<"\n";
	cout<<"Thursday Temperature	:"<<weeklyTemperatures.at(3)<<"\n";
	cout<<"Friday Temperature	:"<<weeklyTemperatures.at(4)<<"\n";

	cout<<"Days of Temperatures in Vector: "<<weeklyTemperatures.size()<<"\n";

	cout<<"Update the temperatures:"<<"\n";
	cin>>weeklyTemperatures.at(0);
	cin>>weeklyTemperatures.at(1);
	cin>>weeklyTemperatures.at(2);
	cin>>weeklyTemperatures.at(3);
	cin>>weeklyTemperatures.at(4);



	cout<<"Add Saturday temperature:"<<"\n";
	int tempVal {0};
	cin>>tempVal;
	weeklyTemperatures.push_back(tempVal);
	
	cout<<"Add Sunday temperatures"<<"\n";
	cin>>tempVal;
	weeklyTemperatures.push_back(tempVal);
	cout<<"Days of Temperatures in Vector"<<weeklyTemperatures.size()<<"\n";
	cout<<"_______________________________"<<endl;
    cout<<"Updated temperatures:"<<"\n";
	cout<<"Monday Temperature	:"<<weeklyTemperatures.at(0)<<"\n";
	cout<<"Tuesday Temperature	:"<<weeklyTemperatures.at(1)<<"\n";
	cout<<"Wednesday Temperature:"<<weeklyTemperatures.at(2)<<"\n";
	cout<<"Thursday Temperature	:"<<weeklyTemperatures.at(3)<<"\n";
	cout<<"Friday Temperature	:"<<weeklyTemperatures.at(4)<<"\n";
	cout<<"Saturday Temperature	:"<<weeklyTemperatures.at(5)<<"\n";
	cout<<"Sunday Temperature	:"<<weeklyTemperatures.at(6)<<"\n";

	
	vector<vector<double>> twoD
	{
		{65,45,49},
		{91,88,32}
	};

	cout<<"Two dimensional vectors:"<<"\n";
	cout<<"twoD Vectors:"<<twoD[0][0]<<","<<twoD[0][1]<<","<<twoD[0][2]<<"\n";
	cout<<"twoD Vectors:"<<twoD[1][0]<<","<<twoD[1][1]<<","<<twoD[1][2]<<"\n";

	cout<<"Update second row of two dimensional vectors:"<<"\n";
	cin>>twoD[1][0];
	cin>>twoD[1][1];
	cin>>twoD[1][2];

	cout<<"Updated values for two dimensional vectors:"<<"\n";
	cout<<"twoD Vectors:"<<twoD.at(0).at(0)<<","<<twoD.at(0).at(1)<<","<<twoD.at(0).at(2)<<"\n";
	cout<<"twoD Vectors:"<<twoD.at(1).at(0)<<","<<twoD.at(1).at(1)<<","<<twoD.at(1).at(2)<<"\n";
	return 0;
}