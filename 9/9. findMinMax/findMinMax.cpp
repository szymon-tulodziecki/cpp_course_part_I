#include <iostream>

using namespace std;
void findMinMax(int arr[], int arrSize, int& min, int& max);
int main()
{
    int tab[9];
    int tabSize = 9;
    int min, max;

    for( int i = 0; i<=9; i++)
    {
        cout << "Enter the "<<i+1<<" number: ";
        cin >> tab[i];
    }

    findMinMax(tab, tabSize, min, max);

    cout << endl << "Maximum value is equal to: "<< max << endl;
    cout << endl << "Minimum value is equal to: "<< min << endl;

    return 0;
}

void findMinMax(int arr[], int arrSize,  int& min, int& max)
{
 min = arr[0];  
 max = arr[0]; 
 
for( int i = 0; i <= arrSize; i++)
{
    if(arr[i] > max )
    {
        max = arr[i];
    }
     
    if(arr[i] < min )
    {
        min = arr[i];
    }
}
}
