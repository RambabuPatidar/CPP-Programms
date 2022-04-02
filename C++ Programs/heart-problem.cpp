#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n;
    cout <<"remember to put the by formula ok rambabu/=(2n-1)*2";
    cin>>m;

    for( int i=3;i<=n;i++){
        for( int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for( int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        for( int l=1;l<=2*n-2*i;l++){
            cout<<"  ";
        }
        for( int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for( int i=1;i<=m;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for( int j=1;j<=m-(2*i-1);j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    
    return 0;
}