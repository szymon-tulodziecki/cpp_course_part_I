#include <iostream>

using namespace std;
int maximum(const int a, const int b, const int c, int& max)
{
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
    
}
int main()
{
    int num1, num2, num3;
    cout << "Enter the 3 values seppared with space : ";
    cin >> num1 >> num2 >> num3;

    int max;

    maximum(num1, num2, num3, max);

    cout << endl << "The biggest value is equal to: " << maximum(num1, num2, num3, max);

    return 0; 
}