#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arraya[n][m],arrayb[n][m],arrayc[n][m];
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            cin>>arraya[i][j];
        }
    }
    cout<<" input the element for the second matrix";
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            cin>>arrayb[i][j];
        }
    }
    //this is optional as sometime if we dont put it empty then it may return strange ans 
    // for( int i=0;i<n;i++){
    //     for( int j=0;j<m;j++){
    //         arrayc[i][j]=0;
    //     }
    // }
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            arrayc[i][j]= arraya[i][j] + arrayb[i][j];
        }
    }
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cout<<arrayc[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}