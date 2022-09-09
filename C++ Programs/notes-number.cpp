#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    cout<<a/2000<<"  number of 2000 notes\n ";
    int b =a%2000;
    cout<<b/500<<"  nuber of 500 notes \n";
    int c =b%500;
    cout<<c/100<<  "  number of 100 notes \n";
   return 0;
}