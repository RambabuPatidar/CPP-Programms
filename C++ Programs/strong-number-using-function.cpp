#include<iostream>
using namespace std;

int facto( int a){
    int factorial =1;
    for ( int i=1;i<=a;i++){
        factorial *=i;

    }
    return factorial;
}

int strong( int n){
     int sum=0;
    while( n>0){
        int lastdigi=n%10;
       int factorial= facto(lastdigi);
       
        sum= sum+factorial;
        n/=10;
    }
    return sum;
    
}

int main(){

    // int n;
    // cin>>n;
    // if( n==strong(n))
    // cout<<"strong number ";
    // else
    // cout <<"non strong number";
// this is for the strong number from an starting number to the number we want.
   int startN ;
   cin>>startN;
   int endN;
   cin>>endN;
   int n=startN;
    while( n<=endN){
        if ( n==strong(n)){
            cout<<n<<" ";
        }
        n++;
    }
    return 0;
}