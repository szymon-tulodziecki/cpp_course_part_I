#include <iostream>
#include <cstdlib>
using namespace std;

int month;

int main()
{
    cout << "Enter number of month: " << endl;
    if(!(cin >> month))
    {
    cerr << "This is not a number!";
    exit(0);
    }
    
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month have 31 days!";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month have 30 days!";
        break;
        case 2:
            {
                int year;
                cout << "Enter the year: " << endl;
                cin >> year;

                if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                {
                cout << "This month have 29 days!";
                }
                else
                {
                cout << "This month have 28 days!";
                }
        break;
            }
        default: cout << "Incorrect month!";
    }
    return 0;
}
