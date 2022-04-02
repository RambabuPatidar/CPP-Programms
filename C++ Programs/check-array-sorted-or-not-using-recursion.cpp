#include<iostream>
using namespace std;

bool isSorted( int arr[], int n){
        if ( n==1){
            return true;
        }
    bool restOfArray = isSorted(arr+1 ,n-1);
    return (( arr[0] < arr[1])&&(restOfArray));

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}