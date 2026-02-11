#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;

    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    char** arr = new char*[n];

    for (int i = 0; i < n; i++) {
        char temp[100];

        cout << "Enter string " << i + 1 << ": ";
        cin.getline(temp, 100);

        arr[i] = new char[strlen(temp) + 1];
        strcpy(arr[i], temp);
    }

    cout << "\nStrings entered are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
