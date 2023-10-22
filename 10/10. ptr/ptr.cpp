#include <iostream>


 using namespace std;

 int main()
 {
    int n1, n2;

    cout << "Enter the first value: ";
    cin >> n1;
    cout << "Enter the second value: ";
    cin >> n2;

    int* ptr = &n1;

    *ptr = n1 + n2;

    cout << endl << " " << n1;



    return 0;
 }