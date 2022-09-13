#include <iostream>
using namespace std;
#include <vector>
#include <iomanip> 

int main()
{
    for (int i {1}; i <= 10; i++)
    {
        cout<<i<<endl;
    }

    for (int i {1}; i <= 10; i+=2)
    {
        cout<<i<<endl;
    }

    for(int i {10}; i >0; i--)
    {
        cout<<i<<endl;
    }

    for (int i{10}; i <= 100; i+=10)
    {
        if (i % 15 == 0)
        {
            cout<<i<<endl;
        }
    }

    for (int i{1},j{1}; i <= 5; i++,j++)
    {
        cout<<"i + j : "<<(i+j)<<endl;
    }

    for (int i{1}; i <= 100; i++)
    {
        cout<<i;
        if (i % 5 == 0)
        {
            cout<<endl;
        }
        else
        {
            cout<<" ";
        }
    }

    for (int i{1}; i <= 100; i++)
    {
        cout<<i<<((i%10 == 0)?"\n":" ");
    }

    // For Loop for Vector 
    vector<int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }

    //Range based for-loop 
    int grades[]{100, 90, 80, 70, 60, 50};
    for (auto grade:grades)
    {
        cout<<grade<<endl;
    }

    vector<double> courseGrades{95.5, 25.5, 63.1, 84.2, 84.3};
    double gradeAvg{};
    double total{};

    for (auto courseGrade:courseGrades)
    {
        total += courseGrade;
    }

    if (courseGrades.size() != 0)
    {
        gradeAvg = total / courseGrades.size();
    }

    cout<<fixed<<setprecision(1);
    cout<<"Average Grade: "<<gradeAvg<<endl;

    for (auto val:{1,2,3,4,5,6})
    {
        cout<<val<<endl;
    }

    for (auto c:"A char using range based for loop.")
    {
        if (c != ' ')
        {
            cout<<c;
        }
    }

    for (auto c:"A char using range based for loop.")
    {
        if (c == ' ')
        {
            cout<<"\t";
        }
        else
        {
            cout<<c;
        }
    }
    cout<<endl;
    return 0;
}