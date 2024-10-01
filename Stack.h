#ifndef STACK_H
#define STACK_H

#include "Node.h"  // Assuming Node.h defines the Node structure or class

class Stack {
private:
    Node* topNode;  // Pointer to the top of the stack

public:
    Stack();  // Constructor to initialize the stack
    void push(int val);  // Function to push an element onto the stack
    int pop();  // Function to pop the top element off the stack
    bool isEmpty();  // Function to check if the stack is empty
    int top();  // Function to return the top element without popping it
    void display();  // Function to display the stack
    ~Stack();  // Destructor to free memory
};

#endif  // STACK_H
