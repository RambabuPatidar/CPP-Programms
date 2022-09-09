#include<iostream>
using namespace std;
#define n 5 
class crclrQueue {
    public:
    int *arr;
    int rear;
    int front;

    // public:
    // constructor
    crclrQueue(): front(-1) {
        arr = new int[n];
        rear = -1;
    }

    bool isFull() {
        if( front == 0 && rear == n-1) {
            return true;
        }
        if(front == rear +1) {
            return true;
        }
        return false;
    }

    void enqueue(int val) {
        if(isFull()) {
            cout << "circular queue overflowed" << endl;
            return ;
        }

        if( front == -1) {
            front++;
        }
        rear =( rear+1) %n ;
        arr[rear] = val;
    }

    void dequeue() {
        if( front == -1) {
            cout << "no element in the queue to pop" << endl;
            return ;
        }
        else{
            if( front == rear) {
            front = -1;
            rear =-1;
            }
            else{
            front = (front+1) %n;
            
            }
        }
        
        
    }
    int peek() {
        if( front == -1) {
            cout << "NOthing on the top " << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty() {
        if(front == -1) {
            return true;
        }
        return false;
        
    }

};

int main() {

    crclrQueue q;
    q.dequeue();
    q.enqueue(1);
    cout << q.peek();
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    cout << endl << q.peek() << endl;
    q.enqueue(6);
    q.dequeue();
    q.enqueue(7);
    cout << q.peek() << endl;
    cout << q.arr[1] << endl;
    
    return 0;
}