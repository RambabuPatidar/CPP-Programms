#include<iostream>
using namespace std;

int idxOfKey( int arr[], int n, int i, int key){

    if( i==n)
        { return -1;}
    if( arr[i]==key)
      { return i;}
   return  idxOfKey(arr, n,i+1,key);
    
}


int idxOfLastKey( int arr[], int n, int i , int key){
    if( i==n)
        { return -1;}
    int rosidx= idxOfLastKey( arr,n,i+1,key);

    if( rosidx!=-1){
        return rosidx;
    }
    if( arr[i]==key){
        return i;
    }
    return -1;
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<idxOfKey(arr,n,0,4);
    cout<<idxOfLastKey( arr,n,0,4);
    return 0;
}