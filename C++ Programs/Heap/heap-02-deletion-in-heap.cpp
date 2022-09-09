#include<iostream>
using namespace std;

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i]  = arr[j];
    arr[j] = temp;
    return ;
}

void heapify(int arr[], int n, int i) {

    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if( l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if( r < n && arr[r] > arr[largest] ) {
        largest = r;
    }

    if( largest != i ) {
        swap( arr, i , largest);

        heapify(arr, n, largest);
    }
}

void deleteInHeap(int arr[], int& n) {
    int lastElement = arr[n-1];
    arr[0] = lastElement;

    n = n-1;

    heapify(arr, n, 0);

}

int main(){

    int n;
    cin>> n;
    int arr[n];
    for( int i=0 ;i<n;i++ ) {
        cin>> arr[i];
    }
    for( int i=0;i<n;i++ ) {
        cout << arr[i] << " ";
    }
    // note: this must be already heap 
    // we can use the heap 01 program to make heap from given array
    deleteInHeap(arr, n);
    cout << endl;
    for( int i=0;i<n;i++ ) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << arr[n] << endl;

    return 0;
}