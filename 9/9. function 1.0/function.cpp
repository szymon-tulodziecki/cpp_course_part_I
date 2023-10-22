#include <iostream>

using namespace std;
float meters;

float inches(float m);
float yard(float y);
void miles(float m);
int main()
{
    cout << "Enter amount of meters to convert: ";
    cin >> meters;

    cout<<endl<<"That is "<<inches(meters)<<" inches."<<endl;
    cout<<endl<<"That is "<<yard(meters)<<" yards."<<endl;
    miles(meters);

    return 0;
}
float inches(float i) {return i*39.37;};
float yard(float y) {return y*1.0936;};
void miles(float m) {cout<<endl<<"That is "<<m*0.0006213<<" miles."<<endl;}
