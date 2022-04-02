#include<iostream>
using namespace std;

int main(){

    int arr[10]={2,54,87,12,14,28,98,47,54,100};

    int ans[10]={0};

    for(int i=0;i<10;i++){
        
        for( int j=0;j<=i;j++){
            if( arr[i] >= arr[j]){
                ans[i]++;
            }

        }
    }
    for( auto i: arr)
        cout<<i<<" ";

    cout<<endl;
    for( auto i: ans){
        cout<<i<<" ";
    }
    return 0;


}