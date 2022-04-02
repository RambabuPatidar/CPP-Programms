#include<iostream>
using namespace std;

// a full functionality heap in which most of the opration are present;

class minHeap {
    int capacity;
    int heap_size;
    int *arr;

    public:
    // constructor 
    minHeap(int cap);

    // parent index

    int parent(int i) {
        return (i-1)/2;
    }

    // leftchild index 

    int leftchild(int i) {
        return (2*i +1);
    }

    // rightchild index 

    int rightchild(int i) {
        return (2*i +2);
    }

    // void insert in minHeap

    void insertInMinHeap( int key);

    // get minimum element: return the mini element of heap

    int getMini() {
        return arr[0];
    }

    // extract minimum : this delete the minimum key in heap

    int extractMini();

    // minimum heapify : this will adjust the heap which get distrubed while some opration 

    void minHeapify(int i);

    //delete key : delete the key in heap 

    void deleteKey(int i);

    // decrease key : make the value minus infinite at the respective position 

    void decreaseKey(int i, int val);

    // show heap : this will show the heap at the current position 

    void showHeap();
};

void minHeap:: showHeap() {
    for( int i=0; i<heap_size; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return ;
}

minHeap:: minHeap(int cap) {
    capacity = cap;
    heap_size = 0;
    arr = new int[capacity];
}

void minHeap :: insertInMinHeap( int key) {

    if(heap_size == capacity) {
        cout << "heap overflowed! can't insert";
        return ;
    }
    heap_size++;
    int i = heap_size -1;
    arr[i] = key;

    while( i!= 0 && arr[parent(i)] > arr[i] ) {

        swap(arr, parent(i), i);
        i = parent(i);
    }

    return;
}

void minHeap :: minHeapify(int i) {
    int smallest = i;
    int l = leftchild(i);
    int r = rightchild(i);

    if( l < heap_size && arr[smallest] > arr[l]) {
        smallest = l;
    }
    if( r < heap_size && arr[smallest] > arr[r]) {
        smallest = r;
    }
    if( smallest != i ) {
        swap(arr, smallest, i);

        minHeapify(smallest); 
    }
}

int minHeap::extractMini() {
    if(heap_size < 0 ) {
        return INT_MAX;
    }
    if( heap_size == 1) {
        heap_size--;
        return arr[0];
    }
    int root = arr[0];
    int i = heap_size-1;
    arr[0] = arr[i];
    heap_size--;
    minHeapify(0);
    return root;
}

void minHeap:: decreaseKey(int i, int val) {
    arr[i] = val;

    while( i!=0 && arr[parent(i)] > arr[i]) {
        swap(arr, i,parent(i));
        i = parent(i);
    }
}

void minHeap:: deleteKey(int i) {
    decreaseKey(i, INT_MIN);
    extractMini();
}



int main() {

    minHeap h(10);
    h.insertInMinHeap(2);
    h.insertInMinHeap(3);
    h.insertInMinHeap(8);
    h.insertInMinHeap(6);
    h.insertInMinHeap(7);
    h.showHeap();
    cout << endl;
    h.insertInMinHeap(4);
    h.showHeap();
    cout << endl;
    cout << h.extractMini() << endl;
    h.showHeap();
    h.deleteKey(1);
    cout << endl;
    h.showHeap();
   return 0; 
}