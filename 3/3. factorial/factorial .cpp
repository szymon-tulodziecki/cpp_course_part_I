#include <iostream>

using namespace std;

int l, s = 1;

int main()
{
    cout << "Enter the number: " << endl;
    cin >> l;

    for (int i=1; i <= l; i++)
    {
        s = i * s;

    }
    cout << "Factorial of l " << l << " is equal to: " << s << endl;
    return 0;
}
