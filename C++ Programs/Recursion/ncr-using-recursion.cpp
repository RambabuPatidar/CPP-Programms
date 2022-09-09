//We have input n and we will calculate the nCr from r==1 to r==n and print that 
//vlaues 
//note this is not working for larger value only till 12
//there is lot to learn to solve this go ahead.


#include<iostream>
using namespace std;

int factorial ( int num){
    unsigned long int facto =1;
    for( int i=2;i<=num;i++){
        facto*=i;
    }
    return facto;
}

void ncr( int n , int i){
    if( i==n){
        cout<<"1"<<" ";
        return ;
    }
    if( n<0||i<0){
       cout<<" not valid value of n or i";
       return;
    }
     int value = (factorial(n))/(factorial(n-i)*factorial(i));
     cout<<value<<" ";
     ncr(n,i+1);

     return;
}

int main(){

    unsigned long int  n,i=0;
    cin>>n;
    ncr( n,i);
    return 0;
}