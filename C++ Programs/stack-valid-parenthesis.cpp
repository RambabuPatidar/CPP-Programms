#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

bool checkParenthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(' || s[i] == '<')
        {
            st.push(s[i]);
        }
        else if(s[i]== '>'){
            if(st.top() == '<'){
                st.pop();
            }
            else{
                return false;
                break;
            }
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                return false;
                break;
            }
        }
        else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                return false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                return false;
                break;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
   
}
int main()
{
// {[(<>)}]
    string s = "[()]{}{[()()]()}";
    cout << "we will check the parenthesis is valid or not" << endl;

    if (checkParenthesis(s))
    {
        cout << "valid string .";
    }
    else
    {
        cout << "non valid string";
    }
    return 0;
}