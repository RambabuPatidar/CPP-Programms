#include<iostream>
#include<stack>
using namespace std;

int precedence(char ch){
    if(ch =='^'){
        return 3;

    }
    else if( ch == '*' || ch =='/'){
        return 2;

    }
    else if(ch =='+' || ch == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

string  infixToPostfix(string s){
    stack<char> st;

    string ans= "";
    for(int i =0;i<s.length();i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] >= '0'  && s[i]<='9'){
            ans  += s[i];
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top()!= '('){
                ans +=st.top();
                st.pop();
                
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top())> precedence(s[i])){
                ans  += st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;

}
int main(){

    string s = "(4-5/2)*(9/6-3)";
   cout<< infixToPostfix(s);
    return 0;
}

// ((7+(4*5))-(2+0))
// (4-5/2)*(9/6-3)
// ((8-(4+2))+(7-(3/2))*1)