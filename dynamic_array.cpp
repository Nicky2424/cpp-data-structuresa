#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];   // Dynamic memory allocation

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;   // Free memory

    return 0;
}
