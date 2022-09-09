#include<iostream>
using namespace std;

int findElement( int arr[], int n,int key){
    int a= 0;
    int b= n;
    while(a<=b){
        int mid = ((a+b)/2);
        if( arr[mid]==key){
              return mid;
        }
        else if( arr[mid]<key){
            a= (mid)+1;
        }
        else{
            b= (mid)-1;
        }
    }
    return -1;
}

void bubbleSort( int arr[] , int n){
    for( int i=1;i<=n-1; i++){
        for( int j=0;j<=n-i;j++){
            if( arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[ j+1];
                arr[j+1]= temp;
            }
        }
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"key you want to search?";
    int key ;
    cin>>key;
    bubbleSort( arr, n);
    cout<<"\n"<<" this is the position \n\n";
    cout<<findElement(arr, n,key);
    return 0;
}