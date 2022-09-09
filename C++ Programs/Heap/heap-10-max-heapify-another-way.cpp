#include<iostream>
using namespace std;

void swap(int arr[], int i, int j ) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}

// CLRS  Problem 6-1 
// Modified Build-Max-Heap

void heapIncreaseKey(int arr[], int i, int key) {
    if(arr[i] > key) {
        cout << "the key you want to insert is less than the existing one!" << endl;
        return;
    }
    arr[i] = key;
    while(i > 0  && arr[(i - 1) / 2] < arr[i]) {
        swap(arr, i, (i - 1) / 2);
        i = (i - 1) / 2;
    }
}

void maxHeapInsert(int arr[], int i, int key, int& heapSize) {
    heapSize += 1;
    arr[heapSize - 1] = -100;

    heapIncreaseKey(arr, i, key);
}
void maxHeapifyModified(int arr[], int n) {
    int heapSize = 1;
    for(int i = 1; i< n; i++) {
        maxHeapInsert(arr, i, arr[i], heapSize);
    }
}

// i am Rambabu Patidar. This is my book.
// this is the standard code for the build max-heap

void maxHeapify(int arr[] , int i, int n) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if( left < n and arr[largest] < arr[left] ) {
        largest = left;
    }

    if( right < n and arr[largest] < arr[right]) {
        largest = right;
    }

    if( largest != i ) {
        swap(arr, i, largest);

        maxHeapify(arr, largest, n);
    }
}

int main() {

    int arr[] = {5, 6, 3, 2, 1, 4};
    int n = sizeof(arr)/ sizeof(arr[0]);

    // for(int i = (n/2) - 1; i >= 0; i--) {
    //     maxHeapify(arr, i, n);
    // }


    maxHeapifyModified(arr, n);

    for(int nums : arr) {
        cout << nums << " ";
    }

    return 0;
}
// so the two different ideas are representing the same thing 