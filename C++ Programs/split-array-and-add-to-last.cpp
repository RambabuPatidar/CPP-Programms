#include<iostream>
using namespace std;

void splitarray( int arr[],int n, int key){
    for( int i=0;i<key;i++){
        int temp = arr[0];
        for( int j=0;j< n-1;j++){
            arr[j]= arr[j+1];
        }
        arr[n-1]=temp;
    } 
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    splitarray(arr,n,key);
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}