#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main(){

    int arr[10]={6,-1,0,7,10,2,4,-9,6,12};

    vector<int> ans;
    deque<int> dq;
    int k =2;

    for( int i=0;i<k;i++){
        while( !dq.empty() and arr[dq.back()] < arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);
    }

    ans.push_back(arr[dq.front()]);
    for( int i=k;i<10;i++){
        if( dq.front() == i-k){
            dq.pop_front();
        }
        while(!dq.empty() and arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);

    }

    for( auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}
// go and see the anuj bhaiya video on apni kaksha 
// to get the concept used in the code 
    