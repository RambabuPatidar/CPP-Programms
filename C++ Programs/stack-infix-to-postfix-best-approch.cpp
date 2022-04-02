#include<bits/stdc++.h>
using namespace std;


    int precedence(char ch){
        if( ch == '^'){
            return 3;
        }
        else if( ch == '*' or ch == '/'){
            return 2;
        }
        else if(ch == '+' or ch == '-'){
            return 1;
        }
       
         return -1;
        
    }
    string infixToPostfix(string s)
    {
        stack<char> st;
        string ans = "";
        for(int i = 0;i<s.size(); i++){
            if( s[i] == '('){
                st.push(s[i]);
                
            }
            else if( s[i] == ')'){
                while(!st.empty() and st.top() != '(' ){
                    ans += st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(s[i] == '*' or s[i] == '^' or s[i] == '-' or s[i] == '/' or s[i] == '+'){
                while( !st.empty() and precedence(st.top()) >= precedence(s[i]) ){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else {
                ans += s[i];
            }
        }
        while( !st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }

int main(){

    string s = "2+3*(7-4/(3-2)-1)^2";

    cout<<infixToPostfix(s);
    return 0;
}
// a+b*(c^d-e)^(f+g*h)-i
// (4-5/2)*(9/6-3)