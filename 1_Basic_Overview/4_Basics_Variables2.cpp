/**
 * Basics - S1.4.2
 * C++ 14 
 * Examples of different types of variables
 */
#include <iostream>
using namespace std;

int main()
{
    /**
     * Character Type 
     */
    char aChar {'A'};
    cout<<"The char entered is :"<<aChar<<endl;

    /**
     * Integer types
     */
    unsigned short int hoursInAYear {8760};
    cout<<"Hours in a given year: "<<hoursInAYear<<endl;

    int countriesInTheWorld {195};
    cout<<"Total Countries in the World: "<<countriesInTheWorld<<endl;

    long volumeOfWaterOnEarth  {1356000000};
    cout<<"Volume of Water on Earth: "<<volumeOfWaterOnEarth<<" kilometers Cube"<<endl;

    long long worldsGDP {84710000000000};
    cout<<"World's GDP: "<<worldsGDP<<" Trillion"<<endl;

    /**
     * Floating point types 
     */
    float radiusOfMars {3389.5};
    cout<<"Radius of Mars: "<<radiusOfMars<<" kilometers"<<endl;
    
    double gravityOnMars {3.721};
    cout<<"Gravity on Mars: "<<gravityOnMars<<" meters per second"<<endl;

    long double massOfMars {6.39e23};
    cout<<"Mass of Mars: "<<massOfMars<<" kilograms"<<endl;

    return 0;
}