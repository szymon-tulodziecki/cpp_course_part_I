#include <iostream>
#include <cmath>

using namespace std;

int x = 31, R, D, a, b;
int main()
{
    cout << "(1947-2014) How many times LA Lakers take a game in NBA finals? " << endl;
    cout << "Rick: ";
    cin >> R;

    cout << endl;

    cout << "Daryl : ";
    cin >> D;

    a = abs(x - R);
    b = abs(x - D);

    if(a < b) cout << "Rick Won!";
    else if (b < a) cout << "Daryl Won!";
    else cout << "Draw!";
    
    return 0;
}