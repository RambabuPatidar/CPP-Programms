#include<iostream>
using namespace std;

int number( int n, int a , int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c2+c1-c3;
}

int main(){

    int n, a, b;
    cin>>n>>a>>b;
    //we are here finding that how many number are divisible by both 
    //a and b in the range of 1to n;
    cout<<number(n,a,b);
    return 0;
}