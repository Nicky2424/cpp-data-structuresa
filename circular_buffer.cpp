#include <iostream>
using namespace std;

class CircularBuffer {
private:
    int* buffer;       // dynamically allocated array
    int size;          // size of buffer
    int front;         // index to remove element
    int rear;          // index to add element
    int count;         // current number of elements

public:
    // Constructor to initialize buffer
    CircularBuffer(int s) {
        size = s;
        buffer = new int[size];
        front = 0;
        rear = 0;
        count = 0;
    }

    // Destructor to free memory
    ~CircularBuffer() {
        delete[] buffer;
    }

    // Add element to buffer
    void add(int x) {
        if (count == size) {
            cout << "Buffer Overflow! Cannot add " << x << endl;
            return;
        }
        buffer[rear] = x;
        rear = (rear + 1) % size;
        count++;
        cout << x << " added to buffer." << endl;
    }

    // Remove element from buffer
    void remove() {
        if (count == 0) {
            cout << "Buffer Underflow! Nothing to remove." << endl;
            return;
        }
        int x = buffer[front];
        front = (front + 1) % size;
        count--;
        cout << x << " removed from buffer." << endl;
    }

    // Display current elements in buffer
    void display() {
        if (count == 0) {
            cout << "Buffer is empty." << endl;
            return;
        }
        cout << "Buffer elements: ";
        for (int i = 0; i < count; i++) {
            int index = (front + i) % size;
            cout << buffer[index] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter size of circular buffer: ";
    cin >> n;

    CircularBuffer cb(n);

    int choice, value;

    while (true) {
        cout << "\n1. Add element\n2. Remove element\n3. Display buffer\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to add: ";
                cin >> value;
                cb.add(value);
                break;
            case 2:
                cb.remove();
                break;
            case 3:
                cb.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}
