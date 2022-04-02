#include<iostream>
using namespace std;

int evenOdd( int a){
return (((1<<0) &(a))==0);
}

int main(){

    int a;
cin>>a;

   cout<< evenOdd( a);
    return 0;
}