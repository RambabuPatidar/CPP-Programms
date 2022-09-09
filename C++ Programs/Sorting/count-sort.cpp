#include<iostream>
using namespace std;


void countSort( int arr[], int n){
    int k= arr[0];
    for( int i=0;i<n;i++){
     k= max(k, arr[i]);
    }

    int count[10]={0};
    for( int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for( int i=1; i<=k;i++){
        count[i]+=count[i-1];
    }

    int output[n];
    for( int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }
    for( int i=0;i<n;i++){
        arr[i]= output[i];
    }
}

int main(){

    int arr[9] ={9,5,7,1,4,5,6,8,1};

    countSort(arr, 9);
   

    for( int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}