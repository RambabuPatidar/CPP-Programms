#include<iostream>
using namespace std;

void rotateArray( int arr[], int n,int key){
    int arr2[2*n];
    for( int i=0;i<n;i++){
        arr2[i]=arr[i];
        arr2[i+n]=arr[i];
    }
   
    for( int i=key ;i<key+n;i++){
        cout<<arr2[i]<<" ";
    }
    
}

int main(){

    int n,key;
    cin>>n>>key;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateArray(arr, n,key);
    return 0;
}