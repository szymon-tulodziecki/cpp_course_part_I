#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;


int main()
{
    int size;
    clock_t start, stop;
    double time;
    cout << "Enter the size of the table: ";
    cin >> size;

    int *table;
    table = new int[size];
    
    start = clock();
    for(int i=0; i<size; i++)
    {
        table[i] = i;
        table[i] += 50;
    }
    stop = clock();
    time = (double) (stop - start) / CLOCKS_PER_SEC;

    cout << "Time of save (without pointer): "<<time<<endl;
    delete [] table;
    return 0;
}