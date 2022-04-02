#include<iostream>
using namespace std;

struct priorityQueue{
    int data;
    int priority;
};

priorityQueue arr[100];

int size = -1;

void enqueue(int val, int p) {
    if( size == 100-1) {
        cout << "queue overflowed! can't insert" << endl;
        return ;
    }

    size++;
    arr[size].data = val;
    arr[size].priority = p;
    return ;
}

int peek() {
    int highestPriority = INT_MIN;
    int idx = -1;

    for( int i=0; i<= size; i++) {
        if(highestPriority < arr[i].priority){
            highestPriority = arr[i].priority;
            idx = i;

        }
        else if(highestPriority == arr[i].priority  && idx > -1 &&
                arr[idx].data < arr[i].data ) {
                    highestPriority = arr[i].priority;
                    idx = i;
        }
    }
    return idx;
}

void dequeue() {

    int idx = peek();

    for( int i=idx; i<size; i++) {
        arr[i] = arr[i+1];
    }

    size--;
}

int main() {

    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);

    int index = peek();
    cout << arr[index].data << endl;

    dequeue();

    index = peek();
    cout << arr[index].data << endl;

    dequeue();

    index = peek();
    cout << arr[index].data << endl;

    dequeue();
    return 0;
}