#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double tab[5][3] ={
{4.3, 2.5 ,2.4},
{3.5, 2.3 ,3.0},
{1.3, 4.1 ,6.0},
{2.2, 4.5 ,4.3},
{6.0, 3.0 ,5.2}
};

string subjects[3] = {"Math","Polish", "English"};
for(int i=0; i<5; i++)
{
    for(int j=0; j<3; j++)
    {
        cout << fixed << setprecision(2) << tab[i][j] << "|";
    }
    cout << endl;
}
cout << endl;

for(int i=0; i<5; i++)
{
    cout << "Student " << i+1 << ":" << endl;

    double sum = 0.0;

    for(int j=0; j<3; j++)
    {
        cout << subjects[j] << ": " << fixed << setprecision(2) << tab[i][j] << endl;
        sum += tab[i][j];
    }
    double average = sum/3.0;
    cout << "Average: "<< fixed << setprecision(2) << average << endl;
    cout << endl;
}
       return 0;
}
