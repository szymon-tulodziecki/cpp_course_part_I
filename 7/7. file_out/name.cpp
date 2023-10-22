#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

string name, surname;
int tel;
int main()
{


    fstream file;
    file.open("x.txt", ios::in);

    if(file.good() == false)
    {
        cout << "This file doesn't exsist!";
        exit(0);
    }
    string line;
    int n_line = 1;
    while(getline(file, line ))
    {
        switch(n_line)
        {
            case 1: name = line; break;
            case 2: surname = line; break;
            case 3: tel = atoi (line.c_str());break;
        }
    n_line++;
    }

    cout << name << endl;
    cout << surname << endl;
    cout << tel << endl;


    return 0;
}
