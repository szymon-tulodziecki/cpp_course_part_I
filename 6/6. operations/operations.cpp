#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int a,b;
int op;

void clear()
{
    system("cls");
}
int main()
{
    while(true)
    {
        clear();

        cout << "Enter value of a: ";
        cin >> a;

        cout << endl << "Enter value of b: ";
        cin >> b;

        cout << endl << "---------------" << endl;

        cout << "MENU" << endl;
        cout << endl << "1.Addition" << endl;
        cout << "2.Substraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << endl << "Choose operation (1/2/3/4): " << endl;
        cin >> op;


    switch(op)
    {
        case 1:
        {
        int add;
        add = a + b;
        cout << a << "+" << b << " = " << add << endl;
        }
        break;
        case 2:
        {
        int sub;
        sub = a - b;
        cout << a << "-" << b << " = " << sub << endl;
        }
        break;
        case 3:
        {
        int mult;
        mult = a * b;
        cout << a << "*" << b << " = " << mult << endl;
        }
        break;
        case 4:
        {

        int div;
        if(a==0||b==0)
        {
            cout << "You cant devide by zero!" << endl;
        }
        else
        {
            div = a/b;
            cout << a << ":" << b << " = " << div << endl;
        }

        }
        break;
        default: cout << "Try again..." << endl;

        break;
    }
    cout << "Paste enter to continue..." << endl;
    cin.ignore();
    cin.get();
    }
    return 0;
}

