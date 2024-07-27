#include <iostream>
#include <stdexcept> 

using namespace std;

template<typename T>
class Stack {
public:
    
    Stack(int capacity = 100) : capacity(capacity), top(-1) {
        stackArray = new T[capacity];
    }

    
    ~Stack() {
        delete[] stackArray;
    }

    
    void push(const T& value) {
        if (top >= capacity - 1) {
            throw overflow_error("Stack overflow");
        }
        stackArray[++top] = value;
    }

    
    void pop() {
        if (isEmpty()) {
            throw underflow_error("Stack underflow");
        }
        --top;
    }

    
    T& peek() {
        if (isEmpty()) {
            throw underflow_error("Stack is empty");
        }
        return stackArray[top];
    }

    
    bool isEmpty() const {
        return top == -1;
    }

    
    int size() const {
        return top + 1;
    }

private:
    T* stackArray; 
    int capacity;  
    int top;       
};

int main() {
    
    Stack<int> intStack;

    cout << "Pushing integers onto stack: ";
    for (int i = 0; i < 5; ++i) {
        intStack.push(i);
        cout << i << " ";
    }
    cout << endl;

    cout << "Stack size after pushes: " << intStack.size() << endl;

    cout << "Top element: " << intStack.peek() << endl;

    cout << "Popping elements from stack: ";
    while (!intStack.isEmpty()) {
        cout << intStack.peek() << " ";
        intStack.pop();
    }
    cout << endl;

    
    Stack<string> strStack;

    cout << "Pushing strings onto stack: ";
    strStack.push("Hello");
    strStack.push("World");
    strStack.push("Stack");
    strStack.push("Template");

    while (!strStack.isEmpty()) {
        cout << strStack.peek() << " ";
        strStack.pop();
    }
    cout << endl;

    return 0;
}

