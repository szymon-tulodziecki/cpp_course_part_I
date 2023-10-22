#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter values 'a' and 'b': ";
    cin >> a >> b;

    int* arr = new int[b - a];

    cout << "Enter " << b - a << "values: ";
    for(int i = 0; i < b - a; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < b - a; i++)
    {
        cout << arr[i] << " ";
    }
    int* tb = arr;

    for(int i = (b - a) -1; i >= 0; i--)
    {
        cout << tb[i] << " ";
    }
    return 0;
}