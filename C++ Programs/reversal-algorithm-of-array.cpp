#include<iostream>
using namespace std;

void printarray( int arr[], int n){
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[],int s, int e){
    while ( s<e){
        int temp = arr[e];
        arr[e]=arr[s];
        arr[s]=temp;
        s++;
        e--;
    }
}

void rotate( int arr[],int d, int n){
    if( d<0){
        cout<<"enter the valid d value";
    }
    else if( d>n){
        d=d%n;
    }

    reverse(arr, 0,d-1);
    reverse(arr,d,n-1);
    reverse(arr, 0, n-1);
}

int main(){

    int n,d;
    cin>>n>>d ;
    int arr[n];
    int i;
    for(  i=0;i<n;i++){
        cin>>arr[i];
    }
   rotate ( arr, d, n);
   printarray(arr, n);
    
    return 0;
}