#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s="abbcccddddeeeeefffhhhiijjllmmaaaaaannnoooppppqqqrrrrssssttttuuuvvwwxxxyyyyyzzzzz";
    int freq[26];
    for( int i=0;i<26;i++)
        freq[i]=0;

        for( int i=0;i<s.size();i++)
              freq[s[i]-'a']++;

    int minF= INT_MAX;
    char ch='a';
    
    for( int i=0;i<26;i++){
        if(freq[i]<minF  && freq[i]!=0){
                minF=freq[i];
                ch=i+'a' ;
        }
    }

    cout<<minF<<" "<<ch<<endl;
    return 0;
}