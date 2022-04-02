#include<iostream>
using namespace std;

int maximumSquare(int base, int x){
    return (base / x - 1) * (base / x) / 2;
    
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int base;
        cin>>base;
        int x =2;
       cout<< maximumSquare(base,x)<<endl;
    }
    return 0;
}