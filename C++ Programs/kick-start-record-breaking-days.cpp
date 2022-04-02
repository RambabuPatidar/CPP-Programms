#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>> n ;
    int arr[n];
    for( int i=0;i<n; i++) {
        cin>>arr[i];
    }

    int preMax = -1;
    int count = 0;
    if( arr[0] > arr[1] ){
        count++;
        preMax = arr[0];
    }
    for( int i=1;i<n-1;i++){
        if( arr[i] > preMax and arr[i] > arr[i+1]){
            count++;
            preMax = arr[i];
        }
        

    }
    if( arr[n-1] > preMax){
        count++;
    }
    cout<< count << endl;
    return 0;
}