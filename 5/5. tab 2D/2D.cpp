#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int tab[5][5];
int sum = 0;

int main()
{
    srand(time(NULL));

    for(int i=0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            tab[i][j] = rand() % 100+1;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << tab[i][j] << "|";
        }
        cout << endl;
    }
 
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            sum += tab[i][j];
        }
    }
    cout << endl << "Sum of the 2D tab elements is equalt to: " << sum;
    return 0;
}
