#include <iostream>
using namespace std;

int main()
{
	int num;
	const int min = 10;
	const int max = 100;
	const int target = 20; 

	cout<<"Enter a number between "<<min<<" and "<<max<<" : ";
	cin>>num;

	if(num >= min)
	{
		cout<<"Statement 1"<<endl;
		cout<<num<<" is greater than or equal to "<<min<<" by "<<num-min<<endl;
	}

	if(num <= min)
	{
		cout<<"Statement 2"<<endl;
		cout<<num<<"is less than or equal to "<<max<<" by "<<max - num<<endl;
	}

	if(num>= min && num<=max)
	{
		cout<<"Statement 3"<<endl;
		cout<<num<<"is in range "<<endl;
		cout<<"In this case, only statements 1 and 2 should show up"<<endl;
	}

	if(num == min || num==max)
	{
		cout<<"Statement 4"<<endl;
		cout<<"The number is right on the boundary" <<endl;
		cout<<"In this case, all 4 statements should show up."<<endl;
	}

	//If-Else 
	if (num >= target)
	{
		cout<<num<<" is greater than or equal to"<<target<<"by"<<num-target<<endl;
	}
	else
	{
		cout<<num<<" is less than"<<target<<"by"<<target-num<<endl;
	}

	//Nested If-Else 
	int score;
	cout<<"Enter your score on the exam (0-100) :";
	cin>>score;
	char letter_grade;
	if (score >=0 && score <=100)
	{
		if (score >= 90)
			letter_grade = 'A';
		else if (score >= 80)
			letter_grade = 'B';
		else if (score >= 70)
			letter_grade = 'C';
		else if (score >= 60)
			letter_grade = 'D';
		else
			letter_grade = 'F';

		cout<<"Your grade is "<<letter_grade<<endl;
		if(letter_grade == 'F')
			cout<<"Sorry, please repeat the class"<<endl;
		else
			cout<<"Course Passed!"<<endl;

	}
	else
	{
		cout<<"Sorry, entered "<<score<<" is not in the range "<<endl;
	}

	//Switch-Case Statements 

	cout<<"Switch - Case Statements:"<<endl;
	cin>>letter_grade;

	switch(letter_grade)
	{
	case 'a':
	case 'A':
		cout<<"You need a 90 or above, study hard!"<<endl;
		break;
	case 'b':
	case 'B': 
		cout<<"You need 80-90 for a B, go study!"<<endl;
		break;
	case 'c':
	case 'C':
		cout<<"You need 70-79 for an average grade"<<endl;
		break;
	case 'd':
	case 'D':
		cout<<"You should strive for better grade. All you need is 60-69"<<endl;
		break;
	case 'f':
	case 'F':
	{
		char verdict;
		cout<<"Are you sure (Y/N)?"<<endl;
		cin>>verdict;
		if(verdict == 'y' || verdict == 'Y')
			cout<<"Alright, I guess try to PASS next time."<<endl;
		else if (verdict == 'n' || verdict == 'N')
			cout<<"Great - continue studying"<<endl;
		else 
			cout<<"Wrong Input"<<endl;
		break;
	}

	default:
		cout<<"Sorry, not a valid grade."<<endl;
	}


	cout<<endl;
	return 0;



}