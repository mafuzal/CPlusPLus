/**
 * Arrays/Vectors - S2.2.2
 * C++ 14 
 * Example of Vectors
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Declare Vectors 
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(35);
	vector1.push_back(200);

	//Display the elements in vector1
	cout<<"vector1 values:\n";
	cout<<"[0]="<<vector1.at(0)<<endl;
	cout<<"[1]="<<vector1.at(1)<<endl;
	cout<<"vector1 size: "<<vector1.size()<<endl;


	vector2.push_back(309);
	vector2.push_back(109);

	//Display the elements in vector2
	cout<<"vector2 values:\n";
	cout<<"[0]="<<vector2.at(0)<<endl;
	cout<<"[1]="<<vector2.at(1)<<endl;
	cout<<"vector2 size: "<<vector2.size()<<endl;

	// Two Dimensional Vectors 
	vector <vector<int>> vector2d;
	vector2d.push_back(vector1);
	vector2d.push_back(vector2);

	cout<<"vector2d values: \n";
	cout<<vector2d.at(0).at(0)<< " "<<vector2d.at(0).at(1)<<endl;
	cout<<vector2d.at(1).at(0)<< " "<<vector2d.at(1).at(1)<<endl;

	cout<<"Change vector1.at(0):\n";
	vector1.at(0) = 256;

	cout<<"vector1 values after update:\n";
	cout<<vector1.at(0)<<"\n";
	cout<<vector1.at(1)<<"\n";
	cout<<endl;
	return 0;
}