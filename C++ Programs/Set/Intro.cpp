#include<bits/stdc++.h> 
#include<set>
#include<iterator>

using namespace std;

int main() {

    set<int> st;
    
   // more about the associative container and unordered associative container is 
//    given on GFG in best way possible.
// Make sure you first see the prerequisites provided in articles and also 
// follow the hyperlinks provided in the articles. Personally I had learned from there 
// good explanation is given.

// some links to proceed:   
// https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
    // proceed from here first see :
    // set
    // multiset
    // map
    // multimap 
    // unordered associative containers in same order.

    
    st.insert(3);
    st.insert(1);
    st.insert(5);
    st.insert(8);
    st.insert(2);

    set<int>:: iterator it;
    cout << &it << endl;
    for (it = st.begin() ; it != st.end(); it++) {
        cout << *it << endl;
    }


    vector<int> v;

    v.push_back(1);

    return 0;
}