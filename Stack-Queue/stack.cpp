/*
    Implementing Stack Operations.
    1. pop(): removes the top of stack
    2. push(item): Add an item to the top of stack
    3. peek(): Return the top of the stack
    4. isEmpty(): Return true if and only if stack is empty.
*/

#include<bits/stdc++.h>
#define SIZE 5
using namespace std;


template <class T> class myStack {
    private:
        int top;
        T stack[SIZE];

    public:

        myStack() {
            top = -1;
        }

        void push(T item) {
            if(isFull()) {
                cout << "stack is full";
            }
            cout << "Inserted ele " << item << endl;
            top++;
            stack[top] = item;
        }

        T pop() {
            T pop_element = stack[top];
            top--;
            return pop_element;
        }

        T peek() {
            if(isEmpty() == false) return stack[top];
            else return 0;
        }

        bool isEmpty() {
            if(top == -1) 
                return 1;
            else 
                return 0;
        }

        bool isFull() {
            if(top == (SIZE-1))
                return 1;
            else 
                return 0;
        }

};

int main() {

    myStack<int> intStack;

    intStack.push(2);
    intStack.push(44);
    intStack.push(77);

    cout << intStack.pop() << " is removed from stack" << endl;
    cout << "Top element is " << intStack.peek() << endl;


    return 0;
}