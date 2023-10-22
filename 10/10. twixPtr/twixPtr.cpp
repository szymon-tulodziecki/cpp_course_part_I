#include <iostream>

using namespace std;
int calculateSum(int** arr, int rows, int cols)
{
    int sum = 0;
    for ( int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
int main()
{
    int n1, n2;

    cout << "Enter the first value: ";
    cin >> n1;

    cout << "Enter the second value: ";
    cin >> n2;

    int** arr = new int* [n1];

    for ( int i = 0; i < n1; i++)
    {
        arr[i] = new int[n2];
    }
    cout << "Enter the elements of array: " << endl;
    for ( int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            cin >> arr [i] [j];
        }
    }

    int sum = calculateSum(arr, n1, n2);
    
    cout << "Sum of the elements:  " << sum << endl;

    for (int i = 0; i < n1; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}