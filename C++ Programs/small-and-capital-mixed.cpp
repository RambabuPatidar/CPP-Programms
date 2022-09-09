#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="lajsdghGFHhjldksjHFSJLKWSjflksj";
    for( int i=0;i<str.size();i++)
{
    if ( str[i]>='a'&& str[i]<='z'){
        str[i]-=32;
        cout<<str[i];
    }
    else{
        cout<<str[i];
    }
    // else{
    //     str[i]+=32;
    //     cout<<str[i];
    // }
}    
    return 0;
}