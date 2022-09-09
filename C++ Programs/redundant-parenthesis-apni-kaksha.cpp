#include<bits/stdc++.h>

using namespace std;

bool redunduntParenthesis(string s){

    stack<char> st;
    int ans = false;

    for( int i=0;i<s.length();i++){
        if( s[i]=='('){
            st.push(s[i]);
        }
        else if( s[i] == '*' or s[i]=='-' or s[i]=='/' or s[i]=='+'){
            st.push(s[i]);
        }
        else if( s[i]==')'){
            
            if( st.top()=='('){
                ans = true;
            }
            
            while(st.top()=='*' or st.top()== '/' or st.top()=='+' or st.top()=='-'){
               st.pop();
            }
            st.pop();

        }
    }
    return ans;
}

int main(){
    
    string s = "a+(b*d-((c+d)))";
    if(redunduntParenthesis(s)){
        cout<<"yes have extra parenthesis";
    }
    else{
        cout<<"no extra parenthesis";
    }
    return 0;
}