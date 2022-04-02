#include<iostream>
using namespace std;

int factorial( int n){
    if( n==1){
        return 1;
    }

   int prefacto= factorial( n-1);
   return n*prefacto;
}
int main(){

    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}