#include <iostream>
using namespace std;

int main()
{
    int num {};
    cout<<"Enter a positive integer to start countdown.\n";
    cin>>num;

    while(num > 0)
    {
        cout<<num<<endl;
        --num;
    }

    int num2 {};
    cout<<"Enter a positive integer to count up to:\n";
    cin>>num2;

    int i{1};
    while (num2 >= i)
    {
        cout<<i<<endl;
        i++;
    }

    int num3{};
    cout<<"Enter an integer less than 100:";
    cin>>num3;

    while (num3 > 100)
    {
        cout<<"Enter an integer less than 100: \n";
        cin>>num3;
    }

    bool t {false};
    int num4 {0};

    while (!t)
    {
        cout<<"Enter an integer between 1 and 5: \n";
        cin>>num4;
        if (num4 <= 1 || num4 >= 5)
        {
            cout<<"Outside range.\n";
        }
        else
        {
            cout<<"Right entry."<<endl;
            t = true;
        }
    }
    cout<<endl;

    char selection {};
    do
    {
        /* code */
        cout<<"-----------------------------------"<<endl;
        cout<<"1. Do this "<<endl;
        cout<<"2. Do that "<<endl;
        cout<<"3. Do something else"<<endl;
        cout<<"Q. Quit "<<endl;
        cout<<"Enter your selection: \n";
        cin>>selection;

        if ( selection == '1')
        {
            cout<<"You chose 1 - doing this "<<endl;
        }
        else if (selection == '2')
        {
            cout<<"You chose 2 - doing that "<<endl;
        }
        else if (selection == '3')
        {
            cout<<"You chose 3 - doing something else "<<endl;
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout<<"Quit..."<<endl;
        }
        else
        {
            cout<<"Unknown option - try again. "<<endl;
        }
    } while ( selection != 'q' && selection != 'Q');
    cout<<endl;
    return 0;
}