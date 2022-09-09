#include<iostream>
using namespace std;

int main(){

    int n,value,position;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"input the position and value";
    cin>>position>>value;
    if( position<0&&position>=n+1){
        cout<<"this is not a valid position.";
    }
    else{
        for( int i=n;i>=position;i--){
            arr[i]=arr[i-1];
        }  
    }
    arr[position-1]=value;
        n++;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}