#include<iostream>

using namespace std;

int main(){

    int n1,n2;
    cin>>n1>>n2;
    int arr[n1][2];
    for ( int i=0;i<n1;i++){
        for( int j=0;j<n2;j++){
            cin>>arr[i][j];
        }
    }
    
    int size = (n1>n2)?n2:n1;
    for( int i=0;i<size;i++){
        int j=i;
        int temp =arr[i][j];
        arr[i][j]= arr[i][(size-j)-1];
        arr[i][(size-j)-1]=temp;
    }
    for( int i=0;i<n1;i++){
        for( int j=0;j<n2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}