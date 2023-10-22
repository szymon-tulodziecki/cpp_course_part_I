#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()

{
    int l, g;

    srand(time(NULL));

    l = rand() % 10 + 1;
 
    cout << "I drew a number from 1-10 guess what number: ";

    while(g !=l)
    {
        cin >> g;

        if(l == g)
        {
            cout <<"Correct!" << endl;
        }
        else if(l < g)
        {
            cout << "Number is a litle bit smaller" << endl;
        }
        else if(l > g)
        {
            cout << "Number is a litle bit bigger" << endl;
        }
        else
        {
            cout << "The number out of range!" << endl;
        }
    }
    cin.ignore();
    return 0;
}
