#include<iostream>
#include<stack>
using namespace std;

string postfixToInfix(string s){
    stack<string> st;

    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            string store(1,s[i]);
            st.push(store);
        }
        else {
            string opt1 = st.top();
            st.pop();
            string opt2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push("(" + opt2 + s[i] + opt1 + ")");
                break;
            case '-':
                st.push("(" + opt2 + s[i] + opt1 + ")");
                break;
            case '*':
                st.push("(" + opt2 + s[i] + opt1 + ")");
                break;
            case '/':
                st.push("(" + opt2 + s[i] + opt1 + ")");
                break;
            
            default:
            cout<<"sorry i don't know much";
                break;
            }
        }
    }
    return st.top();
}

int main(){

    string s = "745*+20+-";
    cout<<postfixToInfix(s);
    return 0;
}