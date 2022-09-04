/**
 * Basics - S1.6
 * C++ 14 
 * Example 
 */
#include <iostream>
using namespace std;

int main()
{
    cout<<"Total University Course Estimation for 5 Courses/Semester"<<"\n";
    cout<<"How many full-time semesters would you like to take?"<<"\n";
    int noOfSemesters;
    cin>>noOfSemesters;
    cout<<"No. of semesters entered: "<<noOfSemesters<<"\n";
    const double costOfOneCourse {1315.25};
    const double GST {0.07};

    double totalbeforeTax = noOfSemesters*costOfOneCourse*5;
    double totalafterTax = totalbeforeTax*GST + totalbeforeTax;

    cout<<"Total cost before tax:"<<totalbeforeTax<<"\n";
    cout<<"Total cost after tax:"<<totalafterTax<<"\n";

    return 0;
}