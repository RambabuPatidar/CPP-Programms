#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"write  the value how much array you want ?";
    cin>>n;
    cout<<"input all the values in the array.";
    int arrayint[n];
    for( int i=0;i<n;i++){
        cin>>arrayint[i];
    }
    int key;
    cout<<" write the key want to find?";
    cin>>key;

    int i;
    for(  i=0;i<n;i++){
        if ( key==arrayint[i]){
            cout<<i;
            break;
        }
        
    }
    if(i==n){
        cout<<"-1";
    }
    return 0;
}