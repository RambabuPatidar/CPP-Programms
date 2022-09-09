#include<iostream>
#include<stack>

using namespace std;

string postfixToPrefix(string s){
    stack<string> st;

    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            string store(1,s[i]);
            st.push(store);
        }
        else{
            string opt2 = st.top();
            st.pop();
            string opt1 = st.top();
            st.pop();

            switch (s[i])
            {
            case  '+':
                st.push(s[i] + opt1 + opt2);
                break;
            case  '-':
                st.push(s[i] + opt1 + opt2);
                break;
            case  '*':
                st.push(s[i] + opt1 + opt2);
                break;
            case  '/':
                st.push(s[i] + opt1 + opt2);
                break;
            
            default:
            cout<<"sorry";
                break;
            }
        }
    }
    return st.top();
}

int main(){

    string s="842+-732/-1*+";
    cout<<postfixToPrefix(s);
    return 0;
}