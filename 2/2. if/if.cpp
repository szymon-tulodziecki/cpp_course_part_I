#include <iostream> 

using namespace std;

int main()
{
    cout << "Welcome in our Bank!" << endl;
    cout << "---------------------" << endl;
    string x;

    cout << "ENTER THE PIN: " << endl;
    cin >> x;

    string y = "1729";

    if(x == y)
    {
        cout << "Your account: 7.454$";
    }
    else
    {
        cout << "Wrong data!";
    }

    


    return 0;
}