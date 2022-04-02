#include<bits/stdc++.h>
using namespace std;

long long int mod(long long int a){
    if( a<0){
        a*= -1;
    }
    return a;
}

int main(){

    int t;
    cin>>t;
    while( t--){
        int n;
        cin>>n;
        long long int arr[n];
        for( int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int maximum = arr[n-1]; int minimum = arr[0];
        long long int ans =0;
        ans += mod(maximum - minimum);

        int first = 0;
        int second = 0;
        int maxx = 0;
        for( int i=1;i<=n-2;i++){
            first = mod(arr[i] - maximum);
            second = mod(minimum - arr[i]);
            maxx =max(maxx , (first +second) );
        }
        cout<<ans +maxx<<endl;

    }
    return 0;
}