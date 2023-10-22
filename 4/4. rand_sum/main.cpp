#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int l_1, l_2, sum;

    srand(time(NULL));

    l_1 = rand() % 10+1;
    l_2 = rand() % 10+1;

    sum = l_1 + l_2;
    
    int sum_check;
    cout << "We have: " << l_1 << " and " << l_2 << " Enter their sum: " ;
    cin >> sum_check;

    if(sum_check == sum)
    {
        cout << "Corect!" << endl;
    }
    else
    {
        cout << "Noah!" << endl;
    }


    return 0;
}
