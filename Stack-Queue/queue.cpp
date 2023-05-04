/*
    Implementing Stack Operations.
    1. add(item): add an item to the end of the list.
    2. remove(item): Remove the first item in the list
    3. peek(): Return the top of the queue
    4. isEmpty(): Return true if and only if queue is empty.
*/

#include <bits/stdc++.h>
#define SIZE 5
using namespace std;

class myQueue {
    private:
        int front, rear;
        int *queue;
    public:
        myQueue() {
            front = rear = 0;
            queue = new int;
        }

        void add(int item) {
            if(SIZE == rear) {
                cout << "Queue is full" << endl;
                return;
            } else {
                queue[rear] = item;
                rear++;
            }
            return;
        }

        void remove() {
            if(isEmpty()) {
                cout << "Queue is empty" << endl;
                return;
            } else {
                for(int i = 0; i < rear-1; i++) {
                    queue[i] = queue[i+1];
                }
                rear--;
            }
            return;
        }

        int peek() {
            if(isEmpty()) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return queue[front];
        }

        bool isEmpty() {
            if(front == rear) return true;
        }
};

