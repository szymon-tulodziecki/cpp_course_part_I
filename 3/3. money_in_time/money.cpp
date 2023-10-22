#include <iostream>


using namespace std;

int money = 10000, time = 0;

int main()
{
    do
    {
    time++;
    money = (money + 50);

    cout << "Time:" << time;
    cout << " Money:" << money << "\n";

    }
    while(money <= 50000);
    return 0;
}
