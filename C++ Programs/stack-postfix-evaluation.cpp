#include<iostream>
using namespace std;
#include<stack>
#include<math.h>

int  postfixEvaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');

        }
        else{
            int opt2  = st.top();
            st.pop();
            int opt1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(opt1+opt2);
                break;
            case '-':
                st.push(opt1-opt2);
                break;
            case '*':
                st.push(opt1*opt2);
                break;
            case '/':
                st.push(opt1/opt2);
                break;
            case '^':
                st.push(pow(opt1,opt2));
                break;
            
            default:

            cout<<"i don't know much operator sorry";
                break;
            }
        }
    }
    return st.top();
}

int main(){

    string s ="237432-/-1-2^*+";
    
    cout<<postfixEvaluation(s);

    
    return 0;
}
// 46+2/5*7+
// 745*+20+-