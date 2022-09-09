#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int reverse = 0;
    int tempN = n;
    while( n>0){
        int lastdigi = n%10;
        reverse = reverse*10 +lastdigi;
        n/=10;
    }
    if ( reverse==tempN){
        cout<<"palindrome";
    }
    else
      cout <<"not palindrome";
    return 0;
}