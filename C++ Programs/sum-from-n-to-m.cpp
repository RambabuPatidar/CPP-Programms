#include<iostream>
using namespace std;

int sum( int n1 , int n2){
   if( n2==n1){
       return n1;
   }

   int prevalue= sum( n1, n2-1);
    return n2 +prevalue;
}

int main(){

    int n1,n2;
    cin>>n1>>n2;
   cout<< sum( n1, n2);
    return 0;
}