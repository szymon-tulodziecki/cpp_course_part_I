#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int x = rand() % 100 +1;
    int g = 0;
    int y = 0;

    while(g != x)
    {
    cout << endl;
    cout << "Guess a number between 1 and 100. " << endl;
    cout << "Enter your anwser-> ";
    cin >> g;

    y++;

    if (x == g) cout << "Great! Correct Anwser! You guessed after " << y << " tries. ";
    if (x > g) cout << "Given number is to small!" << endl;
    if (x < g) cout << "Given number is to big!" << endl;

    }
}