#include<iostream>
using namespace std;

void swap(int arr[] , int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    return;
}
// this is the original way of heapify

void maxheapify(int arr[] , int i, int n) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n and arr[left] > arr[largest]) {
        largest = left;
    }

    if(right < n and arr[right] > arr[largest]) {
        largest = right;
    }

    if( largest != i) {
        swap(arr, i, largest);

        maxheapify(arr, largest, n);
    }
}

// explicitaly showing the base condition 
// as such it is not required because of the below code.

void maxheapify02(int arr[] , int i, int n) {

    if( i >= n / 2) {
        return;
    }

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if( arr[left] > arr[largest]) {
        largest = left;
    }

    if( arr[right] > arr[largest]) {
        largest = right;
    }

    if( largest != i) {
        swap(arr, i, largest);

        maxheapify02(arr, largest, n);
    }
}

// iterative way to max-heapify 

void maxheapify03(int arr[] , int i, int n) {

    int largest = i;

    do{
        
        i = largest;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if(left < n and arr[left] > arr[largest]) {
            largest = left;
        }

        if(right < n and arr[right] > arr[largest]) {
            largest = right;
        }

        if( largest != i) {
            swap(arr, i, largest);
        }
        
    } while(largest != i);

}
    

int main(){

    int arr[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    
    maxheapify03(arr, 1, sizeof(arr) / sizeof(arr[0]));

    for(int nums: arr) {
        cout << nums << " ";
    }
    
    return 0;
}