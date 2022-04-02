#include<iostream>
using namespace std;

int main(){

    int n,power;
    cin>>n>>power;
    int number=1;
    for( int i=1;i<= power;i++){
        number = number*n;
    }
    cout<<number<<endl;
    return 0;
}