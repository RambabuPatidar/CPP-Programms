#include<iostream>
using namespace std;

// DNF sort . 
// this technique is used for the sorting three number if repeated.

void swap(int arr[], int a , int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]= temp;
}

void dnfSort(int arr[], int n){
    int mid = 0;
    int low=0;
    int high = n-1;
    
    while( mid <= high){
        if( arr[mid]==0){
            swap(arr,low,mid);
            low++;mid++;
        }
        else if( arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }

        
    }
}

int main(){

    int arr[10] ={0,2,0,1,0,1,2,0,0,1};
    dnfSort(arr, 10);
    for( int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// give the anology that we have three color balls 
// we have to seprate them so just throw 
// same color ball in you right and left side 
// at last you will be left with the third color ball./
//dnf is also that simple to understand 