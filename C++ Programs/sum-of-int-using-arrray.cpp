#include<iostream>
using namespace std;

int main(){

    int n,sum=0;
    cin>>n;
    int arrayint[n];
    for( int i=0;i<n;i++){
        cin>>arrayint[i];
    }
    for(int i=0;i<n;i++){
         sum+=arrayint[i];
    }
    cout<<sum<<endl;
    return 0;
}