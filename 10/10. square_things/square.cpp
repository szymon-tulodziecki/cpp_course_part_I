#include <iostream>

using namespace std;

int main()

{
    double side, area, perimeter;

    cout << "Enter the length of the side of square: ";
    cin >> side;

    double* areaPtr = &area;
    double* perimeterPtr = &perimeter;

    *areaPtr = (side * side);
    *perimeterPtr = (side * 4);

    cout << endl;
    cout << "The area is of the square is equal to: " << *areaPtr;
    cout << endl << "The perimeter of the sqare is equal to: " << *perimeterPtr;

    return 0;
}