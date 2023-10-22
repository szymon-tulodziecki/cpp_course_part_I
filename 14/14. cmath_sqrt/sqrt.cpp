#include <iostream>
#include <cmath>

using namespace std;

int main()
{
float x1, y1, x2, y2, d;

cout << "A (x1, y1) = " << endl;
cin >> x1 >> y1;

cout << "B (x2, y2) = " << endl;
cin >> x2 >> y2;

d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
cout << d << endl;
    return 0;
}