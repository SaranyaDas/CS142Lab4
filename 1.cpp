#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    public:
    Node() {
        data = 0;
        next = NULL;
    }
}
class Stack {
    public:
    Node * top;
    public:
    Stack() {
        top = NULL;
    }
    void push(int value) {
        Node * ptr = new Node;
        ptr -> data = value;
        if(isEmpty() == true) {
        top = ptr;
        }
        else {
            ptr -> next = top;
            top = ptr;
        }
        cout << value << " has been pushed into the stack.\n";
    }
    int pop() {
        int delVal = 0;
        if(isEmpty() == true) {
        return -9999;
        }
        else {
            Node * temp = top;
            delVal = temp -> data;
            top = temp -> next;
            temp -> next = NULL;
            delete temp;
            return delVal;
        }
        return delVal;
    }
    bool isEmpty() {
        if(top == NULL) {
        return true;
        }
        else {
        return false;
        }
    }
    int size() {
        int counter = 0;
        Node * temp = top;
        while(temp != NULL) {
            temp = temp -> next;
            counter++;
        }
        return counter;
    }
    void display() {
        Node * temp = top;
        while(temp != NULL) {
            cout << temp -> data << ", ";
            temp = temp -> next;
        }
        cout << ".\n";
    }
    int topValue() {
        if(isEmpty() == true) {
        return -9999;
        }
        else {
        return top -> data;
    }
}
int main() {
    cout << "Stack Object.";
    Stack stack1;
    int choice = 0;
    int val = 0;
    cout << "Enter 1 to push an element into the stack.\n";
    cout << "Enter 2 to pop an element from the stack.\n";
    cout << "Enter 3 to show the size of the stack.\n";
    cout << "Enter 4 to display the elements of the stack.\n";
    cout << "Enter 0 to exit.\n";
    do {
        cout << "Enter your choice\n";
        cin >> choice;
        switch(choice) {
            case 1: cout << "Enter the value to be pushed into the stack.\n";
                    cin >> val;
                    stack1.push(val);
                    break;
            case 2: val = stack1.pop();
                    cout << val << " has been popped from the stack.\n";
                    break;
            case 3: val = stack1.size();
                    cout << "The number of elements in the stack is " << val << endl;
                    break;
            case 4: stack1.display();
                    break;
            case 5: val = stack1.topValue();
                    cout << val << " is the value at the top of the stack.\n";
                    break;
            case 0: break;
            default: cout << "Enter a valid integer.\n";
        }
    }
    while(choice != 0) {
    return 0;
}
}
