#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;

    cout << "Enter value of angle: ";
    cin >> x;

    cout << sin(x * M_PI/180) << endl;
    cout << cos(x * M_PI/180) << endl;
    cout << tan(x * M_PI/180) << endl;
    cout << 1 / tan(x * M_PI/180) << endl;


    return 0;
}