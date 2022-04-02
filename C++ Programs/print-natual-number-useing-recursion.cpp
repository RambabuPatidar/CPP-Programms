#include<iostream>
using namespace std;

void  printNumber( int n1, int n2){

    if ( n1<=n2){
        cout<<n1<<" ";
    }
     
     printNumber( n1 +1, n2);
}

int main(){

    int n1,n2;
    cin>>n1>>n2;
    printNumber(n1 ,n2);
    return 0;
}