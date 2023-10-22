#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



int main()
{
    int size;
    cout << "Enter the amount of numbers in table: ";
    cin >> size;

    srand(time(NULL));

    int *table;
    table = new int [size];

    for( int j = 0; j<size; j++)
    {
        table [j] = rand() % 100 +1;
    }

    for(int i = 0; i<size; i++)
    {
        cout << table[i] << endl;
    }
 
 
    delete[] table;








    
    return 0;
}