#include<iostream>
using namespace std;

/*
euclid's algorithm is like when we subtract the number with the smaller numbwer
the hcf of that number doesnot changes and also we can do this like getting remainder 
of number by modulo aand also that hcf will not change 
see the video of c++  placement course by apna college if you don't understand here
ok . 
*/

int hcf( int n1, int n2){
    while( n1%n2>0){
        int n3 = n1%n2;
        n1=n2;
        n2=n3;

    }
    return n2;
}

int main(){

    int n1,n2;
    cin>>n1>>n2;
    cout<<hcf(n1,n2);
    return 0;
}