#include<iostream>
using namespace std;

// this is my METHOD 1 and i have to improve this algorithm...

// void rotateArray( int arr[], int n,int d){
//         int store[n]={0};
//         for( int i=0;i<n;i++){
//             if( i<d){
//                 store[i]=arr[i];
//             }else{
//                 arr[i-d]=arr[i];
//             }
            
//         }
//         for( int i=0;i<d;i++){
//             arr[n-d+i]=store[i];
//         }
//         for( int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
// }

//ANOHTER METHOD 2

// void  rotateArray(int arr[], int n, int d){
   

//         for(int i=0;i<n;i++){
//             int temp = arr[0];
//             int j;
//             for(  j=0;j<n-1;j++){
//                 arr[j]=arr[j+1];
                
//             }if( j==n-1){
//                     arr[j]=temp;
//                 }
//             d--;
//             if( d==0){
//                 break;
//             }
            
//         }
       

    
//     for( int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// METHODE 3 I DISCOVERED 
// THIS IS DIFFERENT CLOCKWISE THAN THE TWO 

 void rotateArray(int arr[], int n, int k){
    int j = n-1;
    while( k>=1){
        int prevArr = 0;
        prevArr = arr[j];
        for( int i=n-1;i>=1;i--){
            arr[i] = arr[i-1];

        }
        arr[0] =prevArr;

        
        k--;
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n,d; 
    cin>>n>>d;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];

    }
    rotateArray( arr, n,d);
    return 0;
}
