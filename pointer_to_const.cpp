#include <iostream>
using namespace std;

int main() {
    const int num = 100;      // constant variable
    const int* ptr = &num;    // pointer to a constant variable

    cout << "Value of num: " << num << endl;
    cout << "Value via pointer: " << *ptr << endl;

    // *ptr = 200;  // ERROR! Cannot modify value through pointer

    cout << "Trying to modify value via pointer is not allowed." << endl;

    return 0;
}
