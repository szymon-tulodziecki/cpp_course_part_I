#include <iostream>

using namespace std;

int x, difference;
int main()
{
    cout << "Enter quantity of elements: ";
    cin >> x;

    double* tab_1 = new double[x];
    double* tab_2 = new double[x];

    for(int i=0; i < x; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> tab_1[i];
    }
    cout << endl;

     for(int i = 0; i < x; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> tab_2[i];
    }
    cout << endl;

    for(int i = 0; i < x; i++)
    {
        difference = tab_1[i] - tab_2[i];
        cout << tab_1[i] << "-" << tab_2[i] << "=" << difference << endl;
    }
    delete[] tab_1;
    delete[] tab_2;
    return 0;
}
