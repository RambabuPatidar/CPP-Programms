#include<iostream>
using namespace std;

void primefactors(int n){
    int spf[100]={0};//the main reason we are making this array and not get directly the value we want to work on because 
                    //when we will pass the value of its index to the that element then they were be one digit less bcz 
                    // array start form the 0 and then we have to manage that stuff and that is very complicated.
    for( int i=2;i<=n;i++){
        spf[i]=i;
    }
    for( int i=2;i<=n;i++){
        if ( spf[i]==i){
            for( int j=i*i;j<=n;j+=i){
                if( spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main(){

    int n;
    cin>>n;
    primefactors(n);
    return 0;
}

//another method i had discovered while doing by myself.
// #include<iostream>
// using namespace std;

// void primeFactor( int arr[], int n ){
//     for( int i=2;i<=n;i++){
//         if( arr[i]==0){
//             arr[i]=i;
//             for( int j=i*i;j<=n;j+=i){
//                 if( arr[j]==0){
//                     arr[j]=i;
//                 }
//             }
//         }
//     }
//    while( n!=1){
//        cout<<arr[n]<<" ";
//        n/=arr[n];
//    }
// }

// int main(){

//     int n;
//     cin>>n;
//     int arr[ 100]={0};
//     primeFactor( arr, n);
//     return 0;
// }