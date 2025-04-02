//implementation of stack 
#include<iostream>
#define SIZE 5
using namespace std;
class stack{
    private:
    int arr[SIZE];
    int top;
    public:
    stack(){
        top = -1;
    }
    void push(int val)
    {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = val;
        cout << "Inserted " << val << endl;
    } 
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << "Deleted : " << arr[top--]<< endl;
    }
    void peep(){
        if(top<0){
            cout<<"Stack is Underflow"<<endl;
            return;
        }
        cout<<"The top element is :"<<arr[top]<<endl;
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
int main()
{
    stack s;
    int choice,val;
    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push  2. Pop  3. Display  4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to Insert: ";
                cin >> val;
                s.push(val);
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
}