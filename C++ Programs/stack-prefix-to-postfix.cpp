#include<iostream>
#include<stack>

using namespace std;

string prefixToPostfix(string s){
      stack<string> st;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            string store(1,s[i]);
            st.push(store);
        }
        else{
            string opt1 = st.top();
            st.pop();
            string opt2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(opt1 + opt2 + s[i]);
                break;
            case '-':
                st.push(opt1 + opt2 + s[i]);
                break;
            case '*':
                st.push(opt1 + opt2 + s[i]);
                break;
            case '/':
                st.push(opt1 + opt2 + s[i]);
                break;
            
            default:
            cout<<"sorry i don't know much operator";
                break;
            }
        }
    }

    return st.top();
}

int main (){

    string s= "+-8+42*-7/321";

    cout<<prefixToPostfix(s);
    return 0;
}