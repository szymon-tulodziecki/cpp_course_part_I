#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;




void bubbleSort(int *tab, int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int buf; buf = tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=buf;
            }
        }
    }
}

int main()
{   
    clock_t start, stop;
    double TME;

    cout << "Comparing the time of sorting" << endl;

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int *tab;
    tab = new int [size];
    
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        tab[i] = rand()%100000 +1;
    }

    /*
    for(int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
    */

    start = clock();
    bubbleSort(tab, size);
    stop = clock();

    TME = (double)(stop-start) /CLOCKS_PER_SEC;
    cout << endl;
    cout << "Time of bubble sorting: " << TME << "s" << endl;

    cout << "Array after sorting: " << endl;
    /*
        for(int i = 0; i < size; i++)
        {
            cout<<tab[i]<<" ";
        }
    */
    delete [] tab;
    return 0;
}