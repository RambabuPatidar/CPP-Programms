#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int a[t];
    for( int i=0;i<t;i++){
        cin>>a[i];
    }

    for( int i=0;i<t;i++){
        int k= a[i];
        int count=0;
        

        while( k!=0 ){
            if(k>=100){
                k-=100;
                
            }
            else if( k>=50 and k<100){
                k-=50;
            }
            else if(k>=10 and k<50){
                k-=10;
            }
            else if( k>=5 and k<10){
                k-=5;
            }
            else if(k>=2 and k<5){
                k-=2;
            }
            else{
                k-=1;
            }

            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}