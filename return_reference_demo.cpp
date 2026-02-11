#include <iostream>
using namespace std;

// ======== BAD FUNCTION: Returning reference to local variable ========
int& badFunction() {
    int localVar = 10; // local variable
    return localVar;   // BAD! Will cause undefined behavior
}

// ======== GOOD FUNCTION: Returning reference to static variable ========
int& goodFunctionStatic() {
    static int staticVar = 10; // persists after function ends
    return staticVar;
}

// ======== GOOD FUNCTION: Returning reference to global variable ========
int globalVar = 100;
int& goodFunctionGlobal() {
    return globalVar;
}

int main() {
    cout << "=== BAD FUNCTION EXAMPLE ===" << endl;
    int& badRef = badFunction(); // undefined behavior
    cout << "Reference to local variable (BAD): " << badRef << endl;

    cout << "\n=== GOOD FUNCTION WITH STATIC VARIABLE ===" << endl;
    int& staticRef = goodFunctionStatic();
    cout << "Static variable value: " << staticRef << endl;

    staticRef = 50; // modify via reference
    cout << "Modified static variable value: " << goodFunctionStatic() << endl;

    cout << "\n=== GOOD FUNCTION WITH GLOBAL VARIABLE ===" << endl;
    int& globalRef = goodFunctionGlobal();
    cout << "Global variable value: " << globalRef << endl;

    globalRef = 200; // modify via reference
    cout << "Modified global variable value: " << goodFunctionGlobal() << endl;

    return 0;
}
