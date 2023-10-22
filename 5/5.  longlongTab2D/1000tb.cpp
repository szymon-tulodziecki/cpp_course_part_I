#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
long int tab[1000][1000];

int main()
{

    srand(time(NULL));
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            tab[i][j] = rand() % 100+1;
        }
    }
      for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            cout << tab[i][j];
        }
            cout << endl;
    }

    cout << endl;

    long int min = tab[0][0];
    long int max = tab[0][0];

      for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            if(tab[i][j] > max)
            {
                max = tab[i][j];
            }
             if(tab[i][j] < min)
            {
                min = tab[i][j];
            }
        }

            cout << endl;
    }
        cout << "Max value: " << max << endl;
        cout << "Min value: " << min << endl;

    return 0;
}
