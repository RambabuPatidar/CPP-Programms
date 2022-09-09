#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        
        vector<int> v(4);
        for( auto &i:v){
            cin>>i;
        }
        vector<int> v1;
        v1.push_back(v.back());
        v.pop_back();
        v1.push_back(v.back());
        v.pop_back();
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        if( (v1 == v ) or ((v1.front() == v1.back()) and (v.front() == v.back()))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}