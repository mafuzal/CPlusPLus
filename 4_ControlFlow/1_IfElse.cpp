  #include <iostream>
  using namespace std;

  int main()
  {
	int num {};
	const int min {10};
	const int max {100};

	cout<<"Enter a number between "<<min<<" and "<<max<<" : \n";
	cin >> num;

	if (num >= min)
	{
		cout<<"If Statement 1:\n";
		cout<<num<<" is greater than or equal to "<<min<<endl;
		
		int diff {num -min};
		cout<<num<<" is "<<diff<<" greater than "<<min<<endl;		
	}

	if (num <= max)
	{
		cout<<"If Statement 2:\n";
		cout<<num<<" is less than or equal to "<<max<<endl;
		int diff {max - num};
		cout<<num<<" is "<<diff<<" less than "<<max<<endl;		
	}

	if (num >= min && num <= max)
	{
		cout<<"If Statement 3:\n";
		cout<<num<<" is in range  "<<endl;
		cout<<"This means statements 1 and 2 must also display."<<endl;
		
	}

	if (num == min || num == max)
	{
		cout<<"If Statement 4:\n";
		cout<<num<<" is right on a boundary "<<endl;
		cout<<"This means all 4 statements display "<<endl;
	}

	const int definedVal{256};
	if (num >= definedVal)
	{
		cout<<num<<" is greater than or equal to "<<definedVal<<endl;
		int diff{num - definedVal};
		cout<<num<<" is "<<diff<<" greater than "<<definedVal<<endl;
	}
	else
	{
		cout<<num<<" is less than "<<definedVal<<endl;
		int diff {definedVal - num};
		cout<<num<<" is "<<diff<<" less than "<<definedVal<<endl;
	}


	cout<<"Nested if-statements:\n";

	int grade {};
	cout<<"Enter your exam grade (0-100)\n";
	cin>>grade;

	char gradeLetter {};

	if (grade >= 0 && grade <=100)
	{
		if (grade >= 90)
			gradeLetter = 'A';
		else if (grade >= 80)
			gradeLetter = 'B';
		else if (grade >= 70)
			gradeLetter = 'C';
		else if (grade >= 60)
			gradeLetter = 'D';
		else 
			gradeLetter = 'F';

		cout<<" Your grade is: "<<gradeLetter<<endl;
		if (gradeLetter == 'F')
			cout<<"Repeat the course because of F";
		else 
			cout<<"Course completed.\n";
	}
	else 
	{
		cout<<grade<<"Grade not in range.\n";
	}

	cout<<endl;
	return 0;
  }