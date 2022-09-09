#include<bits/stdc++.h>
using namespace std;

int sumdigi(int n){
    
    if(n<10){
        return n;
    }
    
    int num = 0;
    while( n>0){
        int lastdigi = n%10;
        num+= lastdigi;
        n/=10;
    }

    return sumdigi(num);
    
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<sumdigi(n)<<" ";
    }
    return 0;
}