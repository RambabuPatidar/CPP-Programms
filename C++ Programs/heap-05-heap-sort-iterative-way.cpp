#include<iostream>
using namespace std;
// this is mine approch except 28th line 
// see the gfg code also that's also very interesting 
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void heapify(int arr[], int n, int i) {
    
    while( i < n ) {
        int largest = i;
        int left =  2*i +1;
        int right = 2*i +2;

        if( left < n and arr[largest] < arr[left]) {
            largest = left;
        }
        if( right < n && arr[largest] < arr[right]) {
            largest = right;
        }
        if( largest != i) {
            swap(arr, i, largest);

            i = largest;
        }
        else {
            break;
        }
    }
}

void heapSortIterative(int arr[], int n) {
    for( int i=n-1/2; i>=0; i--) {
        heapify(arr, n, i);
    }

    for(int i=n-1; i>=0; i-- ) {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;

        heapify(arr, i, 0);
    }
}

int main() {
    
    int arr[10] = {5, 2, 6, 7, 8, 1, 4, 3, 9, 10};
    int n = sizeof(arr)/ sizeof(arr[0]);

    heapSortIterative(arr, n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}