#include <cmath>
#include <iomanip>
#include <iostream>


int main()
{   
     int x;
     x = pow(2, 32) - 1;
     std :: cout << std :: setprecision(20);
     std :: cout << x << std :: endl;
     std :: cout << sizeof(x) << std :: endl;
    return 0;
}