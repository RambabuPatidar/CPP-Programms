#include<bits/stdc++.h>
using namespace std;

bool cmp(int& a, int& b) {
    return a < b;
}

int main(){

    set<int, greater<int>> st;

    st.insert(3);
    st.insert(1);
    st.insert(5);
    st.insert(-1);
    st.insert(3);
    st.insert(9);
    st.insert(10);

    set<int> :: iterator it = st.begin();
    // this will print in decending order 

    cout << "Set Elements: " << endl;
      for (; it != st.end(); it++) {
        cout << *it << endl;
    }



    // does this works in multiset.

    multiset<int, greater<int>> mst;

    mst.insert(1);
    mst.insert(3);
    mst.insert(-19);
    mst.insert(-19);
    mst.insert(-19);
    mst.insert(-19);
    mst.insert(534);
    mst.insert(23);
    mst.insert(-122);

    multiset<int> :: iterator i = mst.begin();
    cout << "Multiset Elements" << endl;
    for(; i != mst.end(); i++) {
        cout << *i << endl;
    }
    return 0;
}