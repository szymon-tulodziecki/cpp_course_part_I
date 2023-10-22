#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void quicksort(int *tablica, int lewy, int prawy)
{
int v=tablica[(lewy+prawy)/2];
int i,j,x;
i=lewy;
j=prawy;
 do{
 while (tablica[i]>v) i++;
 while (tablica[j]<v) j--;
    if (i<=j)
    {
    x=tablica[i];
    tablica[i]=tablica[j];
    tablica[j]=x;
    i++; j--;
    }
 }
 while (i<=j);
 if (j>lewy) quicksort(tablica,lewy, j);
 if (i<prawy) quicksort(tablica, i, prawy);
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

    for(int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }

    start = clock();
    quicksort(tab, 0, size -1 );
    stop = clock();

    TME = (double)(stop-start) /CLOCKS_PER_SEC;
    cout << endl;
    cout << "Time of bubble sorting: " << TME << "s" << endl;

    cout << "Array after sorting: " << endl;
        for(int i = 0; i < size; i++)
        {
            cout<<tab[i]<<" ";
        }
    delete [] tab;
    return 0;
}