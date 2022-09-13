#include <iostream>
using namespace std;

int main()
{
    char gradeLetter{};

    cout<<"Enter the grade letter of your course.\n";
    cin>>gradeLetter;

    switch(gradeLetter)
    {
        case 'a':
        case 'A':
            cout<<"Grade A >= 90\n";
            break;
        
        case 'b':
        case 'B':
            cout<<"Grade B: >= 80 and <= 79 \n";
            break;

        case 'c':
        case 'C':
            cout<<"Grade C: >= 70 and <= 79 \n";
            break;
        
        case 'd':
        case 'D':
            cout<<"Grade D: >= 60 and <= 69 \n";
            break;

        case 'f':
        case 'F':
        {
            char confirm {};
            cout <<" Is your grade F\n";
            cin>>confirm;

            if (confirm == 'y' || confirm == 'Y')
            {
                cout<<"Try Again.\n";
            }
            else if (confirm == 'n' || confirm == 'N')
            {
                cout<<"Enter the correct grade:\n";
            }
            else 
            {
                cout<<"Wrong entry.\n";
            }
            break;
        }

        default:
            cout<<"Not a valid grade."<<endl;

    }

    cout<<endl;
    return 0;

}