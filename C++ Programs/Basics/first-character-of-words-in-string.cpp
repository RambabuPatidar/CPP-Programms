#include<iostream>
using namespace std;

void firstCharacters(string s){
    for( int i=0;i<s.length();i++){
        if( i==0){
            cout<<s[i]<<" ";
        }
        else if ( s[i]==' '){
            cout<<s[i+1]<<" ";
        }
        else{
            continue;
        }
    }
    return;
}

int main(){

    string s={"Rambabu Patidar Is A Good Boy Ans He Is Hard Working Boy"};
    firstCharacters(s);
    return 0;
}