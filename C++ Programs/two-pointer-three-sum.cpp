#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n ;
    cin>>n;
    int target ;
    cin>>target;
    vector<int> a(n) ;
    for( auto &i: a){
        cin>>i;
    }

    sort(a.begin(), a.end());
    
    bool ans = false;
    for( int i=0;i<n;i++){
        int lo = i+1;
        int hi = n-1;

        while( lo<hi){
            int curr = a[lo] + a[hi] + a[i];
            if( curr == target){
                ans = true;
            }
             if( curr < target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }

    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

// time complexity is n^2
// this can be done in n^3 also 