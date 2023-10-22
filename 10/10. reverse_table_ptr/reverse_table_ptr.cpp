#include <iostream>

using namespace std;


int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << endl;
    int* table = new int[n];

    cout <<"Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> table[i];
    }

    for(int i = n - 1; i >= 0; i--)
    {
        cout << table[i] << endl;
    }

    return 0;
}