#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string problem;
        cin >> problem;

        stack<char> reverse_problem;

        for(char c : problem)
        {
            reverse_problem.push(c);
        }

        while(reverse_problem.size())
        {
            cout << reverse_problem.top();
            reverse_problem.pop();
        }
        cout << endl;
    }
    return 0;
}