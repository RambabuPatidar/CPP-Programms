#include<iostream>
using namespace std;

int sumOfNNaturalNo( int n){

   if( n==0){
       return 0;
   }

   int previousSum= sumOfNNaturalNo(n-1);
    return n+previousSum;
}

int main(){

    int n;
    cin>>n;
    cout<<sumOfNNaturalNo(n);
    return 0;
}