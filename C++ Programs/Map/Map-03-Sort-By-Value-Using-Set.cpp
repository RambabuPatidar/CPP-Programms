#include<bits/stdc++.h>
using namespace std;


// This is little confusing ..
struct comp { 
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
        return l.first < r.first;
    }
};

int main(){

    map<int, int> mp;

    mp.insert({3, 12});
    mp.insert({4, 45});
    mp.insert({6, 65});
    mp.insert({-1, 1});
    mp.insert({7, 109});

    map<int, int> :: iterator it = mp.begin();
    cout << "Map: " << endl;
    for (; it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    // now create a set of pairs

    set<pair<int, int>, comp > s(mp.begin(), mp.end());
    
    cout << "set: " << endl;
    for (pair<int, int> i : s) {
        cout << i.first << "  " << i.second << endl;
    }
    return 0;
}