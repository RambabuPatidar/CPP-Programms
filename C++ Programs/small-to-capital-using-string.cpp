#include<iostream>
#include<string>

using namespace std;

int main(){

    string str="KALKDJNHAKJHDJFHLAJ";

    for( int i=0;i<str.size();i++){
        int ascii= str[i];
        int newascii=ascii+32;
        char ch=newascii;
        cout<<ch;
    }

    //alternate way to convert is :

    // for ( int i=0;i<str.size();i++){
    //     str[i] +=32;
    //     cout<<str[i];
    // }
    
    return 0;
}