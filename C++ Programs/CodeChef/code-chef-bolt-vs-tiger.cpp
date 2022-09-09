#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int finish , distanceToBolt, tigerAcceleration, boltSpeed;
        cin>>finish>> distanceToBolt>> tigerAcceleration>> boltSpeed;
        float time = finish/  boltSpeed;
        float tigerTime = sqrt((2*(finish + distanceToBolt))/tigerAcceleration);
        cout<<tigerTime<<endl;
        if( time < tigerTime){
            cout<<"Bolt"<<endl;
        }
        else{
            cout<<"Tiger"<<endl;
        }
    }
	return 0;
}
