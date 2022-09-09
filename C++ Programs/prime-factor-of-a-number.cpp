#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<"1 ";
    for( int i=1;i<=n;i++){
        if ( n%i==0){
            int counter=0;
             for( int j=1;j<=i;j++){
                 
                if ( i%j==0){
                    counter++;
                }
            }
            if( counter ==2){
                cout<<i<<" ";
            }

        }
       
    }
    cout<<" "<<n;
    return 0;
}