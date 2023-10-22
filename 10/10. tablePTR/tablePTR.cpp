#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the table: ";
    cin >> size;

    int* table;
    table = new int [size];

    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        table[i] = rand() % 100 +1;
    }

    int* tablePtr = table;
    int sum = 0;

    for (int j = 0; j < size; j++)
    {
       sum += tablePtr[j];
    }

    cout << "Sum of the elements is equal to: " << sum;

    delete [] table;

    return 0;
}