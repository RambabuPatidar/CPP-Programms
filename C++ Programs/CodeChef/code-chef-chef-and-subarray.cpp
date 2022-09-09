#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while( t--){
        int n;
        cin>>n;
        int a[n];
        for( int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0;
        for( int i=0;i<n;i++){
            
            int j = i;
            while( j<n){
                int sum = 0;
            int product =1;

                for( int k=i;k<=j;k++){
                    sum+= a[k];
                    product*=a[k];

                }
                if( sum == product ){
                    ans++;
                }
                j++;
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}