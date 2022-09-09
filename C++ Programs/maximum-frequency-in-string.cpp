#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="djahskdljkglksjfglfglkdjflkhhhhhhhhhhgsjkfjdslfjglkjdfglksjdlkgfjajklhddj";

    int fre[26];

    for( int i=0;i<26;i++){
        fre[i]=0;
    }

    for( int i=0;i<s.size();i++){
         fre[s[i]-'a']++;
    }

    int maxF= 0 ;
    char ch='a';
    for( int i=0;i<26;i++){
        if (fre[i]>maxF){
            maxF=fre[i];
            ch = i+'a';
        }
    }
    cout<<maxF<<" "<<ch<<endl;
    return 0;
}