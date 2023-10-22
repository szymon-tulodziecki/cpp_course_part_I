#include <iostream>
#include <fstream>
using namespace std;

string name, surname;
int tel;
int main()
{
    cout << "Enter the name: " << endl;
    cin >> name;
    cout << "Enter the surname: " << endl;
    cin >> surname;
    cout << "Enter phone number: " << endl;
    cin >> tel;

    fstream file;
    file.open("x.txt", ios::out | ios::app);

    file << name << endl;
    file << surname << endl;
    file << tel << endl;
    file.close();


    return 0;
}
