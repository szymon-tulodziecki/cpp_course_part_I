#include <iostream>

using namespace std;

int year;

int main()
{
    cout << "Enter the year: " << endl;
    cin >> year;

    if ((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        cout << "It is the leap year!";
    }
    else
    {
    cout << "It is not the leap year!";
    }
    return 0;
}
