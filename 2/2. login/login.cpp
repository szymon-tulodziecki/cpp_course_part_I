#include <iostream>

using namespace std;

string login;
string passwd;
int main()
{
    cout << "LOGIN: " << endl;
    cout <<"-> ";

    cin >> login;

    cout << "PASSWORD: " << endl;
    cout <<"-> ";

    cin >> passwd;
    
    if(login == "RIKO" && passwd == "12345")
    {
        cout << "-> You're in!";
    }
    else
    {
        cout <<"-> Sorry Bro! Not this time!";
    }
    
    return 0;
}