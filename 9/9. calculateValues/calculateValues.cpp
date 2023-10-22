#include <iostream>

using namespace std;
void calculateValues(int a, int b, int c, int& sum, int& product, int& average, int&max, int& min);
int main()
{
    int x, y, z, sum, product, average, max, min;
    cout << "Enter the value of 'a': ";
    cin >> x;
    cout << endl;
    cout << "Enter the value of 'b': ";
    cin >> y;
    cout << endl;
    cout << "Enter the value of 'a': ";
    cin >> z;
    cout << endl;
    calculateValues(x, y, z, sum, product, average, max, min);

    cout << "Sum of " << x << ", " << y << ", " << z << " is equal to: " << sum << endl;
    cout << "Product of " << x << ", " << y << ", " << z << " is equal to: " << product << endl;
    cout << "Average of " << x << ", " << y << ", " << z << " is equal to: " << average << endl;
    cout << "Maximum value among " << x << ", " << y << ", " << z << " is: " << max << endl;
    cout << "Minimum value among " << x << ", " << y << ", " << z << " is: " << min << endl;
    return 0;
}

void calculateValues(int a, int b, int c, int& sum, int& product, int& average, int& max, int& min)
{
    sum = a + b +c;
    product = a * b *c;
    average = sum/3;
    
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
}