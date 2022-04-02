// #include<iostream>
// using namespace std;

// // i had done it myself 
// void swapTheArray( int arr[],int n){
//     for( int i=0;i<n/2;i++){
//         int temp = arr[n-i-1];
//         arr[n-i-1]= arr[i];
//         arr[i]= temp;
//     }
//     for( int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){

//     int n; 
//     cin>>n; 
//     int arr[n];
//     for( int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     swapTheArray(arr,n);
//     return 0;
// }


// done it from geeks for geeks and see the concept is 
// same only i had done with for loop in little difficult 
// way.
#include<iostream>
using namespace std;

void reverse(int arr[] , int start , int end){

    while(end>start){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr, 0, 3);
    
    reverse(arr, 4, 9);
    reverse(arr, 0 , 9);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}