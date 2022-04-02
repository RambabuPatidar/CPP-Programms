#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int lstdigi =n %10;
        
       
        while(n>10){
            
            n/=10;
        }
       
       int fstdigi = n;
        cout<<(fstdigi+lstdigi)<<endl;
        t--;

    }
    return 0;
}