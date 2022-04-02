#include<iostream>
using namespace std;

int main(){

    char ch = 'R';

    string s(1,ch);
    cout<<s<<endl;
    
    // another way 
    string s2;
    s2.push_back(ch);
    cout<<s2<<endl;

    /*
    i know that this seems to be very simple but 
    see how it got used in prefix to infix question 
    */
    return 0;
}