#include<iostream>
using namespace std;

int power(int n, int p){
    int value =1;
    for( int i=1;i<=p;i++){
        value *= n;
    }
    return value;
}

void nPowerp(int n,int p){
    if( p==n){
       
        return ;
    
    }
    int ans = power(n,p);
    cout<<ans<<" ";
    nPowerp(n, ++p);
}

int main(){

    int n ,p;
    
    cin>>n;
    nPowerp(n,0);
    return 0;
}