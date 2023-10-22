#include <iostream>

using namespace std;

int x, y;

int main()
{
    cout << "How many childs: ";
    cin >> x;
    
    cout << "How many candies: ";
    cin >> y;

    int z = y / (x-1);

    int r = y - z * (x -1);

    if(y < x -1) cout << "There is not enough candies!" << endl;
    else
    {
      cout << "Every child in class will have " << z << " candies" << endl;
      cout << "There will be " << r << " candies in rest" << endl;  
    }
    
    return 0;
}