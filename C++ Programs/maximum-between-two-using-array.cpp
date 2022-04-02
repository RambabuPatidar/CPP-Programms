#include<iostream>
#include<limits.h>
using namespace std;

int main(){
//find max number from the input using arrays 
    int n;
    cin>>n;

    int array[n];
    int maxNo= INT_MIN;
    int minNo= INT_MAX;
    

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for( int i=0;i<n;i++){
    maxNo = max( array[i],maxNo);
    minNo= min( array[i],minNo);
    
    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}