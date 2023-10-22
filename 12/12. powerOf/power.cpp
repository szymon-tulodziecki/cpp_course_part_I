#include <iostream>

using namespace std;
long int powerOf(int p, int w)
{
    if(w == 0) return 1;
    else return p * powerOf(p, w-1); 
}
int main()
{

    cout << powerOf(3, 4);
    return 0;
}