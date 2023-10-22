#include <iostream>
#include <cstdlib>
using namespace std;

int number;

bool prime_number(int n)
{
    if(n <= 0)
    {
        return false;
    }
    for(int i = 2; i * i<=n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{   
    while(true)
    {
            cout<<endl;
            cout<<"Enter the number to check: ";
            cin>>number;

            if(prime_number(number)==true)
            {
            cout<<"That is the prime number!";
            }
            else if(prime_number(number)==false)
            {
            cout<<"That is not the prime number!";
            }
       
    
    };
    
        return 0;
}
