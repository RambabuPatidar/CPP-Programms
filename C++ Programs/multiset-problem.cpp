#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >>n;
    int q;
    cin >> q;
    char s[n];
    cin>> s;

    while(q--) {
        int i, j, k;
        cin >> i >> j >> k;
        if( k == 1) {
            multiset<char> st;
            for(int a = i-1; a<= j-1; a++) {
                st.insert(s[a]);
            }

            for(int a = i-1; a<=j-1; a++ ) {
                s[a] = *st.begin();
                st.erase(st.find(*st.begin()));
            }
        }
        else{
            multiset<char, greater<char>> st;
            for(int a = i-1; a<= j-1; a++) {
                st.insert(s[a]);
            }

            for(int a = i-1; a<=j-1; a++ ) {
                s[a] = *st.begin();
                st.erase(st.find(*st.begin()));
            }
        }

        cout << s << endl;
    }

    cout << s << endl;
    return 0;
}