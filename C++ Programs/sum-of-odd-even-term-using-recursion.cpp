#include<iostream>
using namespace std;

int sumOfOddOrEven( int n1, int n2){
    if ( n1>n2)
      return 0;

    int prevalue=sumOfOddOrEven(n1+2,n2);
    return n1 + prevalue;
}

int main(){

    int n1,n2;
    cin>>n1>>n2;
    cout<<sumOfOddOrEven( n1,n2);
    return 0;
}