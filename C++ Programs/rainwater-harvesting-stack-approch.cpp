#include<iostream>
#include<stack>

using namespace std;

int rainWater(int arr[], int n){

    stack<int> st;
    int ans = 0;
    for( int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            int curr = st.top();
            st.pop();
            
            if( st.empty())
                break;

            int diff = i - st.top() -1;

            ans+= (min(arr[st.top()] ,arr[i] ) - arr[curr])*diff;
        }

        st.push(i);
    }

    return ans;
}

int main(){

    int arr[12]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int n = sizeof(arr)/ sizeof(arr[0]);
   cout<< rainWater(arr, n);
    return 0;

}