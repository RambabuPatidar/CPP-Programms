#include<iostream>
using namespace std;

void deleteAlt(string s){
    if( s.length()<=0){
        return ;
    }

     cout<<s[1]<<" ";
    string preString = s.substr(2);
    deleteAlt(preString);
     return ;
}

int main(){

    string s ={"rambabupatidar"};
   deleteAlt(s);
    return 0;
}