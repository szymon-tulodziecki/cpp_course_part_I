#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int l, x;
    
    cout << "How many numbers you want: ";
    cin >> x;

    srand(time(NULL));

    int i=0;

    while(i < x)
    {   
        i++;
        l = rand()%100+1;
        cout << l << endl;
    }
    cin.ignore();
    return 0;
}
