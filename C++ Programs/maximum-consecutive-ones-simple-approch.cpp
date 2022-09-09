#include<iostream>
using namespace std;

int main(){

    int arr[23]={1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,0,1,0,1};
    
    int n = sizeof( arr)/ sizeof( arr[0]);
    int maximum = INT_MIN;
    int count;
    for( int i=0;i<n;i++){
        if( arr[i]==1){
            int j=i;
             count =0;
            while( arr[j]==1 and j<n){
                count++;
                j++;
            }
        }
        maximum = max(maximum , count);
    }
    cout<<maximum<<endl;
    return 0;
}