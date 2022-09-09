#include<iostream>
using namespace std;

//you can find the transpose of 3x4 matric also 
//ans also of nxn matrix.

int main(){
    
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    int trans[m][n];
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for( int j=0;j<m;j++){
        for ( int i=0;i<n;i++){
            trans[i][j] =mat[i][j];
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}