#include <iostream>

using namespace std;

int  calculateArea(int side_A, int side_B);
int  calculatePerimeter(int side_A, int side_B);
void  printRectangleDetails(int side_A, int side_B);

int main()
{
int sideA, sideB;
cout << "Enter the length of the first side: ";
cin >> sideA;

cout << "Enter the length of the second side: ";
cin >> sideB;

printRectangleDetails(sideA, sideB);

return 0;
}

int  calculateArea(int side_A, int side_B)
{
    int area = side_A * side_B; 
    return area;
}

int calculatePerimeter(int side_A, int side_B)
{
    int perimeter = 2 * (side_A + side_B);
    return perimeter;
}

void  printRectangleDetails( int side_A, int side_B)
{
    cout << endl << "The area is equal to: "<< calculateArea(side_A, side_B) << endl;
    cout << "The perimeter is equal to: "<< calculatePerimeter(side_A, side_B);
}
