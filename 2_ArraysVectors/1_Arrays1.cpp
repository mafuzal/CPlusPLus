/**
 * Arrays/Vectors - S2.1
 * C++ 14 
 * Example of Arrays
 */
#include <iostream>
using namespace std;

int main()
{
    char aChars[] {'a', 'b', 'c', 'd', 'e', 'f'};
    cout<<"The first char is: "<<aChars[0]<<endl;
    cout<<"The last char is: "<<aChars[5]<<endl;

    double gameScores [] {12.1, 15.1, 52.3, 41.8};
    cout<<"The highest score is: "<<gameScores[2]<<" and the least score is: "<<gameScores[0]<<"\n";

    int weeklyTemperatures[] {28,26,27,29,30};
    cout<<"Monday Temperature   :" <<weeklyTemperatures[0]<<"\n";
    cout<<"Tuesday Temperature  :"<<weeklyTemperatures[1]<<"\n";
    cout<<"Wednesday Temperature:"<<weeklyTemperatures[2]<<"\n";
    cout<<"Thursday Temperature :"<<weeklyTemperatures[3]<<"\n";
    cout<<"Friday Temperature   :"<<weeklyTemperatures[4]<<"\n";

    cout<<"Update the temperatures"<<"\n";
    cin>>weeklyTemperatures[0];
    cin>>weeklyTemperatures[1];
    cin>>weeklyTemperatures[2];
    cin>>weeklyTemperatures[3];
    cin>>weeklyTemperatures[4];
    
    cout<<"_______________________________"<<endl;
    cout<<"Updated temperatures:"<<"\n";
    cout<<"Monday Temperature   :" <<weeklyTemperatures[0]<<"\n";
    cout<<"Tuesday Temperature  :"<<weeklyTemperatures[1]<<"\n";
    cout<<"Wednesday Temperature:"<<weeklyTemperatures[2]<<"\n";
    cout<<"Thursday Temperature :"<<weeklyTemperatures[3]<<"\n";
    cout<<"Friday Temperature   :"<<weeklyTemperatures[4]<<"\n";

    cout<<"Value of array name, also the location of array: "<<weeklyTemperatures<<"\n";
    double twoD[2][3]
    {
		{65,45,49},
		{91,88,32}
    };

    cout<<"Two dimensional arrays:"<<"\n";
    cout<<"twoD Row 1:"<<twoD[0][0]<<","<<twoD[0][1]<<","<<twoD[0][2]<<"\n";
    cout<<"twoD Row 2:"<<twoD[1][0]<<","<<twoD[1][1]<<","<<twoD[1][2]<<"\n";
    cout<<"Update 2nd Row:"<<endl;
    cin>>twoD[1][0];
    cin>>twoD[1][1];
    cin>>twoD[1][2];
    
    cout<<"Updated values for two dimensional arrays:"<<"\n";
    cout<<"twoD Row 1:"<<twoD[0][0]<<","<<twoD[0][1]<<","<<twoD[0][2]<<"\n";
    cout<<"twoD Row 2:"<<twoD[1][0]<<","<<twoD[1][1]<<","<<twoD[1][2]<<"\n";
    return 0;
}