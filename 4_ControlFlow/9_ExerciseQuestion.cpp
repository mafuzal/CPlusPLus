#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x{};
    char c {};

    do
    {
        cout<<"P - Print numbers               "<<endl;
        cout<<"A - Add a number                "<<endl;
        cout<<"M - Display mean of the numbers "<<endl;
        cout<<"S - Display the smallest number "<<endl;
        cout<<"L - Display the largest number  "<<endl;
        cout<<"Q - Quit                        "<<endl;
        cout<<"Enter your choice:              "<<endl;
        cin>>c;    

        if (c == 'P' || c == 'p')
        {
            if(x.size() == 0)
            {
                cout<<"[] - the list is empty \n";
            }
            else
            {
                cout<<"[ ";
                for (auto xVal:x)
                {
                    cout<<xVal<< " ";
                }
                cout<<"] \n";
            }
        }
        else if (c == 'A' || c == 'a')
        {
            int valueToAdd;
            cout<<" Enter an Integer to add to the list: \n";
            cin>>valueToAdd;
            x.push_back(valueToAdd);
            cout<<"Value: "<<valueToAdd<<"added \n";
        }
        else if (c == 'M' || c == 'm')
        {
            if (x.size() == 0)
            {
                cout<<"Empty list and nothing to print.\n";
            }
            else
            {
                int total{};
                for (auto xVal:x)
                {
                    total += xVal;
                }
                cout<<"The mean of this list is :"<<total/x.size()<<endl;
            }

        }
        else if (c == 'S' || c == 's')
        {
            if (x.size() == 0)
            {
                cout<<"Empty list and nothing to print.\n";
            }
            else
            {
                int s = x.at(0);
                for (auto xVal:x)
                {
                    if (xVal < s)
                    {
                        s = xVal;
                    }
                }
                cout<<"Lowest number in the list "<<s<<"\n";
            }
        }
        else if (c == 'L' || c == 'l')
        {
            if (x.size() == 0)
            {
                cout<<"Empty list and nothing to print.\n";
            }
            else
            {
                int l = x.at(0);
                for (auto xVal:x)
                {
                    if (xVal > l)
                    {
                        l = xVal;
                    }
                }
                cout<<"HIghest number in the list "<<l<<"\n";
            }
        }
        else if (c == 'Q' || c == 'q')
        {
            cout<<"QUIT"<<endl;
        }
        else
        {
            cout<<"Enter a correct selection.\n";
        }

    } while (c != 'q' && c != 'Q');

    cout<<endl;
    
}