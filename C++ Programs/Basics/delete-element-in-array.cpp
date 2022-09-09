#include<iostream>
using namespace std;

int main(){

    int n,position;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position of element you want to delete?";
    cin>>position;
    for( int i=position-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}