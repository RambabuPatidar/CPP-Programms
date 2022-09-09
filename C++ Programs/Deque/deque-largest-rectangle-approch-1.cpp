#include<bits/stdc++.h>
using namespace std;
void largestRectangle(int arr[], int size){
    stack<int> st;
    vector<int> v;
    for(int i=0;i<size;i++){
        while(!st.empty() and arr[i] < st.top()){
            st.pop();
        }
        if( st.empty()){
            v.push_back(-1);
            
        }
        else{
            v.push_back(st.top());
        }
        st.push(arr[i]);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    return ;
}
int main(){
    int arr[] = {4,2,1,5,6,3,2,4,2} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    largestRectangle(arr, size);
    return 0;
}
