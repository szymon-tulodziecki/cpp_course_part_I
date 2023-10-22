#include <iostream>


using namespace std;
float average(float *tab, int size)
{
    float sum = 0;

    for(int i = 0; i<size; i++)
    {
        sum +=*tab;
        tab++;
    }
    return sum/size;
}
int main()
{
    float table[3];
    table[0] = 1.5; 
    table[1] = 2.3;
    table[2] = 0.75;

    cout << "Average is equal to: " << average(table, 3);


    return 0;
}