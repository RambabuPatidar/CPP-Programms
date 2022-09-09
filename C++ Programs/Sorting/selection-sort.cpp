#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the array length ?";
    cin>>n;
    cout<<" enter the array element in unsorted way? \n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for( int i=0;i<n-1;i++){
        for( int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temporary=arr[j];
                arr[j]=arr[i];
                arr[i]=temporary;
            }
           
        }
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" this is an sorted array ."<<endl;;
    return 0;
}