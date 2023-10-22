#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string txt;
        cin >> txt;

        stack<char>brackles;

        if(txt.length() % 2 == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            for(int i = 0; i < txt.length(); i++)
            {
                if(txt[i] == '(')
                {
                    brackles.push(txt[i]);
                }
                else if(txt[i] == ')')
                {
                    if(brackles.empty())
                    {
                        cout << "no" << endl;
                        break;
                    }
                    else
                    {
                        brackles.pop();
                    }
                }

            }
           if(brackles.empty())
           {
            cout << "yes" << endl;
           }
           else
           {
            cout << "no" << endl;
           }

        }
    }
    return 0;
}