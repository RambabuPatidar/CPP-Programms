#include<iostream>
#include<stack>
using namespace std;

int getMin(stack<int> st) {
    if(st.empty()== true) {
        return INT_MAX;
    }

    int store = st.top();
    st.pop();

    int element = getMin(st);

    return min(store, element);
}

int main(){

    stack<int> st;
    st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    st.push(-1);

    int minimum = getMin(st);

    cout << minimum << endl;
    return 0;
}