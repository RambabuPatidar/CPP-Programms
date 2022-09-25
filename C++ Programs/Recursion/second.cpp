#include<iostream>
#include<stack>
using namespace std;

string reverseString(string s){
    if( s.length() == 0){
        return "";
    }

    string restOfString = reverseString(s.substr(1,s.length()));
    return restOfString + s[0];
}

int prec(char operand){
    if(operand=='^'){
        return 3;
    }
    else if(operand == '*' || operand =='/'){
        return 2;
    }
    else if(operand =='+' || operand =='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPrefix(string s){
    stack<char> st;
    string ans = "";
    for( int i=s.length()-1;i>=0;i--){
        if(s[i] == ')'){
            st.push(s[i]);
        }
        else if(s[i] >='0' and s[i]<='9'){
            ans += s[i];
        }
        else if(s[i] == '('){
            while(!st.empty() and st.top()!=')'){
                ans += st.top();
                st.pop();
            }
            if( !st.empty()){
                st.pop();
            }
        }
        else{
            while( !st.empty() and prec(st.top())>prec(s[i])){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return reverseString(ans);
}

int main(){

    string s = "((7+(4*5))-(2+0))";
   cout<< infixToPrefix(s);
    return 0;
}