#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
int i ;
    for( i=0;i<n-1;i++){
        int next = -1;
        int j;
        for( j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                next = arr[j];
                cout<<arr[i]<<"-> "<< next<<endl;
                break;
            }
            
        }
        if(j==n){
            cout<<arr[i]<<"-> "<<"-1"<<endl;

        }
    }
    cout<<arr[i]<<"-> -1"<<endl;
    return 0;
}