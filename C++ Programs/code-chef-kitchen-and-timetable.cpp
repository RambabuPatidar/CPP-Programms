#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while( t--){
        int n;
        cin>>n;
        int givenTime[n];
        int reqTime[n];
        for(int i=0;i<n;i++){
            cin>>givenTime[i];
        }
        for(int i=0;i<n;i++){
            cin>>reqTime[i];
        }
        int ans = 0;
        if(givenTime[0]>=reqTime[0]){
            ans++;
        }
        for( int i=1;i<n;i++){
            if((givenTime[i] - givenTime[i-1]) >= reqTime[i]){
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}