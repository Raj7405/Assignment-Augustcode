#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

class Stack {
private:
    int arr[MAX_SIZE];
    int top; 

public:

    Stack() {
        top = -1; 
    }
    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push element.\n";
            return;
        }
        arr[++top] = value;
        cout << "Pushed: " << value << endl;
    }  
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop element.\n";
            return -1; 
        }
        int value = arr[top--]; 
        cout << "Popped: " << value << endl;
        return value;
    } 
    bool isEmpty() {
        return (top == -1); 
    }

};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    cout << "Popping elements from the stack:\n";
    while (!myStack.isEmpty()) {
        myStack.pop();
    }

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
