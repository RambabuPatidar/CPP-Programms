#include<iostream>
#include<stack>
using namespace std;
int  precedence(char c){
    if(c =='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;

    }
    else if(c=='-' || c=='+'){
        return 1;

    }
    else{
        return -1;
    }
}
string infixToPrefix(string s){
    stack<char> st;
    string newSt = "";
    for( int i=s.length()-1;i>=0;i--){
        if(s[i] == ')'){
            st.push(s[i]);
        }
        else if(s[i] >='0' && s[i]<='9'){
            newSt.insert(newSt.begin(),s[i]);

        }
        else if(s[i] == '('){
            while(!st.empty() && st.top()!=')'){
                newSt.insert(newSt.begin(),st.top());
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top()) > precedence(s[i])){
                newSt.insert(newSt.begin(), st.top());
                st.pop();
            }
            st.push(s[i]);

        }

    }
    while(!st.empty()){
        newSt.insert(newSt.begin(), st.top());
        st.pop();
    }
    return newSt;
}

int main(){


    string s ="(((8-(4+2))+(7-(3/2))*1))";

    cout<<infixToPrefix(s);
    return 0;
}

// ((7+(4*5))-(2+0))