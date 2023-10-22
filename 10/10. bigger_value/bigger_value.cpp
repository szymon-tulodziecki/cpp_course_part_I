#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first value: ";
    cin >> num1;

    cout << "Enter the second value: ";
    cin >> num2;

        int* ptr;

        if ( num1 > num2)
        {   
             ptr  = &num1;
            *ptr = num2;

             cout << "The first value is equal to: " << num1;
             cout << endl << "The second value is equal to: " << num2;
        }
           

        else if ( num2 > num1)
        {
             ptr = &num2;
            *ptr = num1;

            cout << "The first value is equal to: " << num1;
            cout << endl << "The second value is equal to: " << num2; 
        }    
            

        else  if (num1 == num2)
        {
            cout << "Values are equal";
        }



    return 0;
}