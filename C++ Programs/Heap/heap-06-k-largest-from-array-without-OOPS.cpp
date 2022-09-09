#include<iostream>
using namespace std;

void heapifydown(int heap[], int i, int heap_size){ 
    
    int smallest = i;
    int left = 2*i +1;
    int right = 2*i +2;
    if( left <= heap_size && heap[smallest] > heap[left]) {
        smallest = left;
    }
    if( right <= heap_size && heap[smallest] > heap[right]) {
        smallest = right;
    }
    if( smallest != i) {
        int temp = heap[smallest];
        heap[smallest] = heap[i];
        heap[i] = temp;

        heapifydown(heap, smallest, heap_size);
    }
}

void heapifyup(int heap[], int i, int heap_size) {
    if( i > 0 ) {
        int parent = (i-1)/2;

        if( heap[parent] > heap[i]){
            int temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;

            heapifyup(heap, parent, heap_size);
        }
    }
}

void insertInHeap(int val,int heap[],  int &heap_size) {
    heap_size++;
    int i  = heap_size;
    heap[i] = val;

    heapifyup(heap, i, heap_size);
}

int main() {

  int arr[] = { 11, 3, 2, 1, 15, 5, 4,
						45, 88, 96, 50, 45 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "enter the value of k" << endl;
    int k;
    cin >> k;
    int heap[k];
    int heap_size = -1;
    for(int i=0; i<k; i++) {
        insertInHeap(arr[i], heap, heap_size);
    }
    
    for(int i= k; i<n; i++) {
        if( arr[i] > heap[0]) {
            heap[0] = arr[i];
            heapifydown(heap,0, heap_size);
        }
    }

    for(int i=0; i<k ;i++) {
        cout << heap[i] << " "; 
    }
    return 0;
}