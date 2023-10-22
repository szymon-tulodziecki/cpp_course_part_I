#include <iostream>
#include <stack>
#include <string>
#include <cstdlib> 

using namespace std;

int main()
{
    stack<string> shelf;

    cout << endl;
    if (shelf.empty())
    {
        cout << "Stack is empty";
    }
    cout << endl;

    string title;
    cout << "Paste titles (type 'exit' to stop): ";
    do
    {
        getline(cin, title);

        if (title == "exit")
        {
            break;
        }

        shelf.push(title);

    } while (title != "exit");

    cout << endl;
    if (shelf.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";
    cout << endl;

    while (!shelf.empty())
    {
        cout << shelf.top() << "|" << endl;
        shelf.pop();
    }
    return 0;
}