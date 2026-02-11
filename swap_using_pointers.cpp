/*
Program: Swap Two Numbers Using Pointers

Steps:
1. Declare two integer variables.
2. Use pointers to swap their values.
3. Print swapped values.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input numbers
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Declare pointers
    int* ptr1 = &a;
    int* ptr2 = &b;

    // Swapping using pointers
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    // Output swapped values
    cout << "After swapping:\n";
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    return 0;
}




