#include<iostream>
using namespace std;

string convertUpper (string s){
    for(int  i=0;i<s.length();i++){

        if( s[i]> 92){
        s[i] = s[i] -32;

        }

    }
    return s;

}
string convertLower (string s){
    for(int i=0;i<s.length();i++){
        if(s[i]<96){
            s[i] = s[i] + 32;
        }

    }
    return s;
}


int main(){

    string s="srHiOnmihKJNlGuioLJNBKgKJHLKJHjhfjh";
    cout<<convertUpper(s)<<endl;
    cout<<convertLower(s)<<endl;
    return 0;
}