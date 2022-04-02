#include<bits/stdc++.h>
using namespace std;

int minimumCoin(int coin[],int type[],int n){
    int mini1 = 100005,mini2 =100005,mini3=100005;
    for( int i=0;i<n;i++){
        if( type[i] == 1){
            mini1 = min(coin[i], mini1);
        }
        else if( type[i] == 2){
            mini2 = min(coin[i],mini2);
        }
        else{
            mini3 = min(coin[i], mini3);
        }
    }
    return min((mini1+mini2),mini3);
}

int main(){

    int n;
    cin>>n;
    int coin[n], type[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    for( int i=0;i<n;i++){
        cin>>type[i];
    }
   cout<< minimumCoin(coin, type, n)<<endl;
    return 0;
}

