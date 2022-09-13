#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int xVal;
    cout<<"Enter the number of data items you have?\n";
    cin>>xVal;

    vector<int> x{};
    for (int i{1}; i <= xVal; i++)
    {
        int xItem{};
        cout<<"Enter the data item "<<i<<" : \n";
        cin>>xItem;
        x.push_back(xItem);
    }

    cout<<"Displaying Histogram"<<endl;
    for (auto val: x)
    {
        for (int i{1}; i <= val; i++)
        {
            if (i % 5 == 0)
            {
                cout<<"*";
            }
            else
            {
                cout<<"-";
            }
        }
        cout<<endl;
    }

    return 0;
}