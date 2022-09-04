/**
 * Basics - S1.4.1
 * C++ 14 
 * Examples of int variables 
 */
#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter xVal between 1 and 10:";
    int xVal{0};
    cin>>xVal;

    cout<<"Enter yVal between 5 and 65:";
    int yVal{0};
    cin>>yVal;

    cout<<"xVal * yVal is"<<xVal*yVal<<endl;
    return 0;
}