#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n(the length of arr)"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i +1<<" th element."<<endl;
        cin>>arr[i];

    }
    
    // selection sort 
    for(int i=0;i<n-1;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
       
    }
     cout<<endl;
    }
    cout<<"the sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// #include<iostream>
// using namespace std;

// void swap(int arr[], int j, int i){
//     int temp = arr[i];
//     arr[i] = arr[j] ;
//     arr[j] = temp;
//     return ;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for( int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // insertion sort

//     for(int i=1;i<=n-1;i++){
//         int j = i+1;
//         while(arr[j] < arr[j-1] and j>=0){
//             swap(arr, j, j-1);
//             j--;
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void swap(int arr[], int a , int b){
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
//     return ;
// }

// int main(){

//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // bubble sorting 

//     for(int i=0;i<n-1;i++){
//         for(int j =0;j<n-i-1;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr, j , j+1);
//             }
//         }
//     }
//     for( int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }