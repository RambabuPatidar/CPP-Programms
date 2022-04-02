#include<iostream>
#include<string>
using namespace std;

void fibInArr( int largest, int n, int arr[]){

    int t1 =0, t2=1, fibb = 0;
  while( fibb<=largest ){
      fibb = t1+t2;
        for( int i=0; i<n;i++){
            if ( fibb==arr[i]){
                cout<<arr[i]<<" ";
                
            }
        }

      t1=t2;
      t2 =fibb;
  }
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
   int largest =-9990;
    for( int i=0; i<n;i++){
        cin>>arr[i];
        if( arr[i]>largest){
            largest= arr[i];
        }
    }
    
    fibInArr(largest,n,arr);
    return 0;
}