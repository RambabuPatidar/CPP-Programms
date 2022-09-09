#include<iostream>
using namespace std;

int product( int n){
    if( n==1){
        return 1;
    }
    int preProduct = product(n-1);
   return n*preProduct;
}

int main(){

    int n;
    cin>>n;
    cout<<product( n);
    return 0;
}