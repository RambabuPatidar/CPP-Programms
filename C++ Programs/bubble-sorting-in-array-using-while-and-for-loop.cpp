#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];
    for( int i=0;i<n;i++){
        cin>>array[i];
    }
    int counter=1;
     while( counter<n){
         for( int j=0;j<=n-counter;j++){
             if( array[j]>array[j+1]){
                 int temporary= array[j];
                 array[j]= array[j+1];
                 array[j+1]=temporary;
             }
         }
         counter ++;
     }
     for( int i=0;i<n;i++){
         cout<<array[i]<<" ";
     }

    return 0;
}