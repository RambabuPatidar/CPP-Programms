#include<iostream>
using namespace std;
#define MAX 100
// do it by dynamic memory array so that we should not have to 
// define the max size of array 
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return ;
}

void heapify(int arr[], int i) {

    if( i > 0 ) {

        int parent = (i-1)/2;

        if( arr[i] > arr[parent]) {
            swap(arr, i, parent);

            heapify(arr, parent);
        }
    }
}

void insertInHeap(int arr[], int &n, int key) {
    n = n+1;
    arr[n-1] = key;
    int i = n-1;
    heapify(arr, i);


}

int main( ){
    int arr[MAX] = {10, 5, 3, 2, 4};
    int n =5;

    for( int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertInHeap(arr, n, -1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}