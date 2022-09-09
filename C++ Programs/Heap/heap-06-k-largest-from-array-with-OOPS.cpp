#include<iostream>
using namespace std;

class minHeap{
    int size;
    int *arr;

    public:

    minHeap(int size, int result[]);

    void buildHeap();

    void heapify(int i);
};

minHeap:: minHeap(int size, int result[]) {
    this->arr = result;
    this->size = size;

    
}

void minHeap :: buildHeap() {
    for(int i=( size/2 ) -1; i>=0; i--) {
        heapify(i);
    }
}

void minHeap:: heapify(int i) {
    int smallest = i;
    int left = 2*i +1;
    int right = 2*i +2;

    if( left < size && arr[smallest] > arr[left]) {
        smallest = left;
    }
    if( right < size && arr[smallest] > arr[right]) {
        smallest = right;
    }
    if( smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

        heapify(smallest);
    }
}

void firstKElement(int arr[], int n, int k) {
    minHeap *m = new minHeap(k, arr);
    m->buildHeap();
    for(int i=k; i<n; i++) {
        if(arr[0] < arr[i]) {
            arr[0] = arr[i];
            m->heapify(0);
        }
    }

    for(int i=0; i<k; i++) {
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[] = { 11, 3, 2, 1, 15, 5, 4,
						45, 88, 96, 50, 45 };

    int n = sizeof(arr)/ sizeof(arr[0]);
    int k = 6;
    firstKElement(arr, n, k);


    return 0;
}