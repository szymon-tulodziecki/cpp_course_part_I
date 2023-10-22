#include <iostream>
#include <cmath>
using namespace std;

void exponentiation(double num, double& result)
{

result = pow(num, 2);

} 
int main()
{
    double num1, result;
    cout << "Enter the value: ";
    cin >> num1;

    exponentiation(num1, result);

    cout << "Square root of " << num1 << " is equal to: " << result;

    return 0;
}