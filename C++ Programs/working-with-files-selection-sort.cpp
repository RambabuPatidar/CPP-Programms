#include<iostream>
#include<fstream>
using namespace std;
void swap(int arr[],int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}

void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j =i+1; j<n ;j++) {
            if( arr[i] > arr[j]) {
                swap(arr, i, j);
            }
        }
    }
}

int main( ) {

    int n;
    ifstream inf("Input");
    inf >> n;
    int arr[n];
    for(int i=0; i<n ;i++) {
        inf >> arr[i];
    }

    selectionSort(arr, n);

    inf.close();

    ofstream outf("Input");
    outf << "the sorted array is :  ";
    for(int i=0; i<n;i++) {
        outf << arr[i] << " ";
    }
    outf.close();
    return 0;
}