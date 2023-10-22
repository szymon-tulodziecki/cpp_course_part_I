#include <iostream>
#include <cmath>

using namespace std;

float num;

int main()
{
    cout << "Enter the value: ";
    cin >> num;

    cout << "Round: " << round(num) << endl;

    cout << "Ceil: " << ceil(num) << endl;

    cout << "Floor: " << floor(num) << endl;
    
    cout << "Trunc: " << trunc(num) << endl;
    return 0;
}