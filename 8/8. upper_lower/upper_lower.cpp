#include <iostream>
#include <string>
#include <windows.h>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <cstdlib>

using namespace std;

string text, EXIT;

int main()
{
    while(true){
        do{
            cout << endl<<"Enter the text: ";
            getline(cin, text);
            transform(text.begin(), text.end(), text.begin(),:: toupper);
            istringstream iss(text);

            string word;
            while (iss >> word) 
                {
                word[0] = tolower(word[0]);
                cout<<word<<" ";
                }

            cout<<endl<<"Paste 'exit' to exit: ";
            getline(cin, EXIT);
            cin.ignore();

            if(text.empty())
                {
                system("cls");
                cout<<"The text is empty! Try again. "<<endl;   
                }

            if (EXIT == "exit")
                {
                break;
                }
        } 
        while(text.empty());
        if(EXIT == "exit")
        {
        break;
        }
    }
    return 0;
}