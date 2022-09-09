#include<bits/stdc++.h>
using namespace std;

bool allN(string s){
    for( int i=0;i<s.length();i++){
        if( s[i]=='N'){
            continue;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}
bool allY(string s){
    for( int i=0;i<s.length();i++){
        if( s[i]=='Y'){
            continue;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}

int check(string s){
    sort(s.begin(),s.end());
    if(s[0] == 'I'){
        return 1;
    }
    else if( allN(s)){
        return 3;
    }
    else if( allY(s)){
        return 2;
    }
    else {
        return 2;
    }
}

int main(){

    int t;
    cin>>t;
    while( t--){
        int n;
        cin>>n;
       string s;
       for( int i=0;i<n;i++){
           char ch;
           cin>>ch;
           s.push_back(ch);
       }
       
       int ans = check(s);
       if( ans == 1){
           cout<<"INDIAN"<<endl;
       }
       else if( ans == 2){
           cout<<"NOT INDIAN"<<endl;
       }
       else if(ans ==3){
           cout<<"NOT SURE"<<endl;
       }
    }
    return 0;
}