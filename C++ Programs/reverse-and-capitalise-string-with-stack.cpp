#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s ="rambabu";
    stack<int> st;
    for( int i=0;i<s.length() ;i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        st.top() = st.top() -32;
        char ch  = st.top();
        st.pop();
        cout<<ch;
    }
    return 0;
}