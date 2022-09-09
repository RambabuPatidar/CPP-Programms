#include<iostream>
using namespace std;

void bubbleSort( int arr[], int n){
    for( int i=1;i<=n-1;i++){
        for(int j=0;j<=n-i;j++){//if u don't want to start the j loop from 1 
        //then start it from 1 but theu arr[j] will be replaced by arr[j-1]
            if( arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort( arr , n);
    return 0;
}