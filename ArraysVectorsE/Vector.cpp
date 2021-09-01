#include <iostream>
#include <vector>

using namespace std;
int main()
{
	//vector <char> vowels //empty 
	//vector <char> vowels(5); //5 initialized to zero 
	vector <char> vowels {'a', 'e', 'i', 'o','u'};
	cout <<"vowels[0]"<<vowels[0]<<"\n";
	cout <<"vowels[4]"<<vowels[4]<<"\n";

	//vector <int> test_scores(3); //3 eleemnts all initialized to zero 
	//vector <int> test_scores(3,100);//3 elements all initialized to 100

	vector <int> test_scores{100,98,89};

	cout <<"\n Test scores using array synatx:\n";
	cout << test_scores[0] <<endl;
	cout << test_scores[1] <<endl;
	cout << test_scores[2] <<endl;

	cout <<"\n Test scores using vector synatx:\n";
	cout << test_scores.at(0) <<endl;
	cout << test_scores.at(1) <<endl;
	cout << test_scores.at(2) <<endl;
	cout <<"\n Test scores size: "<<test_scores.size()<<"\n";

	cout <<"Updated test scores:\n";

	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);

	cout <<" Print updated test scores:\n";
	cout << test_scores.at(0) <<endl;
	cout << test_scores.at(1) <<endl;
	cout << test_scores.at(2) <<endl;

	cout <<"\nEnter a test score to add to the vector:";
	int score_to_add = 0;
	cin >> score_to_add;

	test_scores.push_back(score_to_add);
	cout<<"Enter one more test score:\n";

	cin >> score_to_add;
	test_scores.push_back(score_to_add);

	cout<<"\n Test scores are now:\n";
	cout<< test_scores.at(0)<<"\n";
	cout<< test_scores.at(1)<<"\n";
	cout<< test_scores.at(2)<<"\n";
	cout<< test_scores.at(3)<<"\n";
	cout<< test_scores.at(4)<<"\n";
	cout <<"\n Test scores size now: "<<test_scores.size()<<"\n";


	
	//Example of a 2D-Vector:
	vector <vector<int>> movie_ratings
	{
		{1,2,3,4},
		{1,2,4,4},
		{1,3,4,5}
	};
	
	cout<<"Here are the movie rating for reviewer #1 using array synatx: "<<endl;
	cout<<movie_ratings[0][0]<<endl;
	cout<<movie_ratings[0][1]<<endl;
	cout<<movie_ratings[0][2]<<endl;
	cout<<movie_ratings[0][3]<<endl;

	cout<<"Here are the movie rating for reviewer #1 using vector syntax:"<<endl;
	cout<<movie_ratings.at(0).at(0)<<endl;
	cout<<movie_ratings.at(0).at(1)<<endl;
	cout<<movie_ratings.at(0).at(2)<<endl;
	cout<<movie_ratings.at(0).at(3)<<endl;

	
	cout <<endl;
	return 0;

}