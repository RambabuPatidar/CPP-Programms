#include<iostream>
#include<stack>

// redundant means extra 
// to yadi 1 aata hai to extra braces hai 
// nhi to nahi hai 

using namespace std;

bool redundantParenthesis(string s){
    int ans = false;
     stack<char> st;
    for( int i=0;i<s.length();i++){
        if( s[i] =='('){
            st.push(s[i]);

        }
        else if(s[i] == '*' or s[i]== '/' or s[i]== '+' or s[i]=='-'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if( st.top()=='*' or st.top()=='/' or st.top()=='+' or st.top()=='-'){
                st.pop();
                st.pop();
                
            }
            else{
               ans = true;
            }
        }
       
    }
    return ans;

}

int main(){

    string s= "(a*(a+b))";

    cout<<redundantParenthesis(s);
    return 0;
}