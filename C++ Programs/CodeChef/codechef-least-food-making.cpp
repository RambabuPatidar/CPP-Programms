#include<bits/stdc++.h>
using namespace std;

vector<int> lowestFraction(vector<int> v , int mini){
    for(int i=mini;i>=2;i--){
        bool divi = true;
        for(int j=0;j<v.size();j++){
            if( v[j] %i==0){
                continue;
            }
            else{
                divi = false;
                break;
            }
        }
        if(divi){
            for( int k=0;k<v.size();k++){
                v[k] = v[k] / i;
            }
            
            break;
        }
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for( auto &i: v){
            cin>>i;
        }
        int mini= INT_MAX;
        for( auto i: v){
             mini = min(mini, i);
        }
        

        vector<int> res =lowestFraction(v, mini);
        for(auto &i:res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

}