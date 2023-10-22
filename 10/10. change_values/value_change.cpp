#include <iostream>

using namespace std;

int main()
{   
    int a, b;

    cout << "Enter values 'a' and 'b': ";
    cin >> a >> b;

    cout << a << endl;
    cout << b << endl;

    int* ptrA = &a;
    int* ptrB = &b;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << endl;
    cout << a << " " << b << endl;

    return 0;
}