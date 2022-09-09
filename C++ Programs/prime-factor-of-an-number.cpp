#include<iostream>
using namespace std;

void primeFactor(int n){
    for( int i=2;i<=n;i++){
        while ( n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
}

int main(){

    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}