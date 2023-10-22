#include <iostream>

using namespace std;

int main()
{
    int num_1, num_2, index, size;
    
    cout << "Enter the first number: ";
    cin >> num_1;

    cout << "Enter the second numbre: ";
    cin >> num_2;

    cout << "Enter the indeks: ";
    cin >> index;

    cout << "Enter the size of the table: ";
    cin >> size;

    int *table;
    table = new int[size];

    for ( int i = 0; i < size; i++)
    {
        table [i] = num_1;
    }

    table [index] = num_2;

    for (int j = 0; j < size; j++)
    {
        cout << table [j] << " ";
    }



    return 0;
}