#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int check(int x, int y, int z)
{
    int m = 20000;
    int k = 7000;
    int d = 2000;

    int a, b, c;

    a = x / m;
    b = y / k;
    c = z / d;

    int temp = min(a, b);
    int out = min(temp, c);
    return out;


}
int main()
{
    int x, y, z;
   

    cout << "Metal: ";
    cin >> x;

    cout << "Crystal: ";
    cin >> y;

    cout << "Deuterium: ";
    cin >> z;

    if(x < 0 || y < 0 || z < 0) cout << "Wrong data!" << endl;
    else
    {
       int result = check(x, y, z);
    cout << "You can buy " << result << " ships!" << endl; 
    }
    return 0;
}

