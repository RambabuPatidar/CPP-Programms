#include<iostream>
using namespace std;

int gcd( int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main(){

    cout<<"enter  a : ";
    int a;
    cin>>a;
    cout<<"\nenter  b: ";
    int b;cin>>b;

    cout<< gcd(a, b) <<endl;
    return 0;
}