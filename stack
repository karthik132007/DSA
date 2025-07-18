#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
#define max 100
struct Stack {
    int stack[max];
    int top = -1;
    void push(int val) {
        if (top == max - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        stack[++top] = val;
        return;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Removed element : " << stack[top--] << endl;
        return;
    }
    void getsize() {
        cout << "The size of the stack is: " << top + 1 << endl;
        return;
    }
    void peek() {
        if (top == -1) {
            cout << "Empty stack" << endl;
        }
        cout << "The top element is : " << stack[top] << endl;
        return;
    }
};

#endif
