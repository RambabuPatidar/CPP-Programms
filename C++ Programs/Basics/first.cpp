// to reverse the full sentence using recursion

#include<iostream>
using namespace std;
string reverseTheSentence(string s){
    if(s.length()==0){
        return "";
    }
    string preString = reverseTheSentence(s.substr(1));
    return preString +s[0];
}
int main(){
    string s = "this is the rambabu patidar";
    cout<<reverseTheSentence(s);
    return 0;
}