#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;cin>>t;
    while( t-- ) {
        int n;
        cin>>n;
            int i = 1;
        while(n--) {
            int count = 0;
            int store = i;
            while(store>0){
                if( store%2 ==1){
                    count++;
                }
                store = store>>1;               
            }
            if( count %2 ==0) {
                cout << i << " ";
            }
            else{
                n++;
            }
            i++;
        }
        cout << endl;

    }
    return 0;
}

