#include <iostream>
#define SIZE 5
using namespace std;

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << "Inserted " << value << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << "Deleted : " << arr[top--]<< endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;
    
    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push  2. Pop  3. Display  4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to Insert: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}
