#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int population = 1, h = 0;

int main()
{
while(population <= 1000000000)
{
    h++;
    population = population * 2;

    Sleep(400);
    system("cls");

    cout << "Hours: " << h;
    cout << "Population: " << population << "\n";

}
    return 0;
}
