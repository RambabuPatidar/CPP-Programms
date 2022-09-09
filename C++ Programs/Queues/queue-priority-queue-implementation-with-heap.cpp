#include<iostream>
using namespace std;

int arr[50];
int size = -1;

int parent(int i) {
    return (i-1)/2;

}

int leftChild(int i) {
    return (2*i)+1;
}

int rightChild(int i) {
    return (2*i)+2;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return ;
}

void shiftUp(int i) {
    if( i > 0) {

        if( arr[i] > arr[parent(i)]) {
            swap(arr, i, parent(i));

            shiftUp(parent(i));
        }
    }
}

void shiftDown(int i) {
    int largest = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if( left < size && arr[left] > arr[largest]) {
        largest = left;
    }
    if( right < size && arr[right] > arr[largest]) {
        largest = right;
    }

    if( largest!= i) {
        swap(arr, i, largest);

        shiftDown(largest);
    }
}

void insertInPriorityQueue(int val) {
    size++;
    int i = size;
    arr[i] = val;

    shiftUp(i);
}

int extractMax() {
    int result = arr[0];
    arr[0] = arr[size];
    size--;

    shiftDown(0);
    return result;
}

int getMax() {
    return arr[0];
}

void changePriority(int i, int p) {
    int store = arr[i];
    arr[i] = p;

    if( store < p) {
        shiftUp(i);
    }
    else {
        shiftDown(i);
    }
    
}

void removeInPriorityQueue(int i) {
    arr[i] = INT_MAX;

    shiftUp(i);
    extractMax();
}

int main() {

    insertInPriorityQueue(45);
    insertInPriorityQueue(20);
    insertInPriorityQueue(14);
    insertInPriorityQueue(12);
    insertInPriorityQueue(31);
    insertInPriorityQueue(7);
    insertInPriorityQueue(11);
    insertInPriorityQueue(13);
    insertInPriorityQueue(7);

    int i=0;

    while( i<= size) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
    cout << extractMax() << endl;
    i=0;
    while( i<= size) {
        cout << arr[i] << " ";
        i++;
    }
    cout<< endl;
    changePriority(2, 49);
    i=0;
    while( i<= size) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
    removeInPriorityQueue(3);
    i =0;
    while( i<= size) {
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}