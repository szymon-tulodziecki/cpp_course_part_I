#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string text, reversed_text;
string reverseString(const string& t)
{
    int sizeT = t.length();
    for(int i = sizeT - 1; i>=0; i--)
    {
        reversed_text += t[i];
    }
    return reversed_text;
}

int main()
{
    while(true)
    {
        cout << "Enter the text to invert (or 'exit' to quit): ";
        getline(cin, text);
            if(text == "exit")
            {
                break;
            }
            if(text.empty())
            {   system("cls");
                cout<<endl<<"The text is empty! Try again!"<<endl;
            }
            else
            {
                cout << endl << reverseString(text) << endl;
            }
        
    }

    return 0;
}