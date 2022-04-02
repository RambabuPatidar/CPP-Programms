#include<iostream>
using namespace std;

int main(){

    int arr[3][4][4];
    for( int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for( int k=0;k<4;k++){
                cin>>arr[i][j][k];
            }
        }
    }
    for( int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for( int k=0;k<4;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}