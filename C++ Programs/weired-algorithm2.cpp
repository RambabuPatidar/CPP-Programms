#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n]={0};
    

    for( int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    for( int i=1;i<=n;i++){
        for(int j =0;j<n;j++){
            if( arr[j]!=i){
                cout<<i<<endl;
            }
            
        }
    }
    return 0;
}

