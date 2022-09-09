#include<iostream>
#include<stack>
using namespace std;

void nextGreaterElement(int arr[], int n){
    stack<int> st;

    st.push(arr[0]);
    for( int i=1;i<n;i++){

        while(!st.empty() && st.top() <arr[i]){
            cout<<st.top()<<" -> "<<arr[i]<<endl;
            st.pop();
        } 

        st.push(arr[i]);
    }

    while(!st.empty()){
        cout<<st.top()<<" -> "<<"-1"<<endl;
        st.pop();
    }
}

int main(){

    int arr[10] ={4,5,2,25,45,2,1,69,78,100};

    nextGreaterElement(arr, 10);
    return 0;
}

// try it to do so that the order of the element remain same 