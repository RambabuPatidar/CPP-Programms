#include<iostream>
using namespace std;

void printevenOrOdd( int n1,int n2){

    if( n1>n2)
      return;

      cout<<n1<<" ";
    printevenOrOdd(n1+2, n2 );
}

int main(){

    int n1,n2;
    cin>>n1>>n2;
    printevenOrOdd( n1,n2);
    return 0;
}