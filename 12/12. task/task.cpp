#include <iostream>

using namespace std;
long int calculate(const int n)
{
    if(n == 0 || n == 1) return 1;
    else return  n * (calculate(n-1));
}
int main()
{
    int value;

    cout << "Enter the value: ";

    cin >> value;

    cout << calculate(value);
    return 0;
}