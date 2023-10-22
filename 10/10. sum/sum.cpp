#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    int* ptr = &number;
    int sum = 0;

    while (*ptr > 0)
    {
        int digit = *ptr % 10;
        sum += digit;
        *ptr /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;
   
    
    return 0;
}