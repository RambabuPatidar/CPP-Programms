#include<iostream>
#include<stack>

using namespace std;

int rainWater(int arr[] , int n){
    int ans =0;
    int left[n]={0};
    int right[n]= {0};

    left[0] = arr[0];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1], arr[i]);
    }

    right[n-1] = arr[n-1];
    for(int i=n-1;i>=0;i--){
        right[i] = max(right[i+1], arr[i]);

    }

    for( int i=0;i<n;i++){
        ans+= (min(right[i], left[i])- arr[i]);
    }
    
    
    return ans;
}

int main(){

    int arr[12] ={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int n = sizeof(arr)/ sizeof(arr[0]);
   cout<< rainWater(arr, n);
    return 0;
}