// prefix to infix
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string prefixToInfix(string s){
    stack<string> st;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            string store(1,s[i]);
            st.push(store);
        }
        else{
            string opt1= st.top() ;
            st.pop();
            string opt2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push("(" + opt1 + s[i]+ opt2 +")");
                break;
            case '-':
                st.push("(" +opt1 + s[i]+ opt2 +")");
                break;
            case '*':
                st.push("(" + opt1 + s[i]+ opt2 +")");
                break;
            case '/':
                st.push("(" + opt1 + s[i]+ opt2 +")");
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

    string s = "+-8+42*-7/321";

    string ansString =prefixToInfix(s);
    
    cout<<ansString<<endl;
    
    return 0;
}