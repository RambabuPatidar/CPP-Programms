#include<iostream>
using namespace std;

void countSort(int arr[], int n){
    int k=arr[0];
    for( int i =0;i<n;i++){
        k = max(k,arr[i]);
    }

    int count[20]={0};
    for( int i=0;i<n;i++){
        count[arr[i]]++;
    }
     
     for( int i=1;i<=k;i++){
         count[i]+=count[i-1];
     }

     int output[n];
     for( int i=0;i<n;i++){
         output[--count[arr[i]]] = arr[i];
     }
     for(int i=0;i<n;i++){
         arr[i] = output[i];
     }


}

int main(){

    int arr[14]={2,3,4,3,2,1,2,3,2,4,3,2,1,1};
    countSort(arr,14);
    for( int i=0;i<14;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}