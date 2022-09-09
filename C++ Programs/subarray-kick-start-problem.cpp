#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int &i:arr){
        cin>>i;
    }
    int arr2[n-1] ;
    for(int i=0;i<n-1 ;i++){
        arr2[i] = arr[i+1] - arr[i];
    }
    int maximum = -1;
    for(int i=0;i<n-1;i++){
        int k = i;int count = 0;
        while( arr2[k] == arr2[i]){
            count++;
            i++;
        }
        i = i-1;
        maximum = max(count, maximum);
    }

    cout<< maximum +1 << endl;
    return 0;
}