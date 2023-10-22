#include <iostream>

using namespace std;

long int fibonacii(const int w)
{
    if(w == 1 || w==2) return 1;
    else return fibonacii(w-1)+fibonacii(w-2);

}

int main()
{   int n;

    cin >> n;

    cout << n <<" : " << fibonacii(n);
    return 0;
}