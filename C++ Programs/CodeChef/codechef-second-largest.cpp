#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while( t--){
        int a,b,c;
        cin>>a>>b>>c;
       int maximum= max ( a,b);
       int maximumm =max(maximum,c);
       int minimum= min(a,b);
       int minimumm=min(minimum , c);
       int sum = a+b+c ;
       int ans = sum - (maximumm +minimumm);
       cout<<ans<<endl;


    }
    return 0;
}