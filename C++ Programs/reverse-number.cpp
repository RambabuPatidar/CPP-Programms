#include<iostream>
using namespace std;

int main(){

    int reverse=0, num;
    cout <<"enter the number you want to reverse?";
    cin>>num;

    while( num>0){
        int lastdigit = num%10;
        reverse = reverse*10 +lastdigit;
        num/=10;
    }
    cout<<reverse;
    
    return 0;
}