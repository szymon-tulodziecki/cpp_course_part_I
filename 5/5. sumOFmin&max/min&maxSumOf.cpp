#include <iostream>

using namespace std;

int x, sum;
int max, min;

int main()
{
    cout << "Enter quantity of elements: ";
    cin >> x;

    int* tab = new int[x];

    for(int i = 0; i < x; i++)
    {
    cout << "Enter " << i+1 << " element: ";
    cin >> tab[i];
    }

    int max = tab[0];
    int min = tab[0];

    for(int i = 0; i < x; i++)
    {
        if(tab[i] > max)
    {
        max = tab[i];
    }

     if(tab[i] < min)
    {
        min = tab[i];
    }
    }

    sum = max + min;

    cout << "Max value is: " << max << endl;
    cout << "Min value is: " << min << endl;
    cout << "Sum of them is equal to: "  << sum;
    delete[] tab;
    return 0;
}
