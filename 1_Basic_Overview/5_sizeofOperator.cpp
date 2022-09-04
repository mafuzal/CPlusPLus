/**
 * Basics - S1.5
 * C++ 14 
 * Examples of sizeof operator
 */
#include <iostream>
#include <climits>

using namespace std;
int main()
{
    cout<<"sizeof information"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"char: "<<sizeof(char)<<" bytes."<<endl;
    cout<<"int:  "<<sizeof(int)<<" bytes."<<endl;
    cout<<"unsigned int:"<<sizeof(unsigned int)<<" bytes."<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes."<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes."<<endl;
    cout<<"long long: "<<sizeof(long long)<<" bytes."<<endl;
    cout<<"float: "<<sizeof(float)<<" bytes."<<endl;
    cout<<"double: "<<sizeof(double)<<" bytes."<<endl;
    cout<<"long double: "<<sizeof(long double)<<" bytes."<<endl;

    cout<<"_______________________________"<<endl;
    cout<<"Values defined in <climits> file:"<<endl;
    cout<<"MAXIMUM VALUES"<<endl;
    cout<<"char:      "<<CHAR_MAX<<endl;
    cout<<"int:       "<<INT_MAX<<endl;
    cout<<"short:     "<<SHRT_MAX<<endl;
    cout<<"long:      "<<LONG_MAX<<endl;
    cout<<"long long: "<<LLONG_MAX<<endl;

    cout<<"Minimum VALUES"<<endl;
    cout<<"char:      "<<CHAR_MIN<<endl;
    cout<<"int:       "<<INT_MIN<<endl;
    cout<<"short:     "<<SHRT_MIN<<endl;
    cout<<"long:      "<<LONG_MIN<<endl;
    cout<<"long long: "<<LLONG_MIN<<endl;

    cout<<"_______________________________"<<endl;
    cout<<"sizeof can also be used on Varibales"<<endl;
    float radiusOfMars {3389.5};
    cout<<"Radius of Mars: "<<radiusOfMars<<" kilometers"<<"and sizeof(radiusOfMars)= "<<sizeof(radiusOfMars)<<endl;
    
    return 0;
}

