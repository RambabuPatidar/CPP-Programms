#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, int> mp;

    mp.insert({-3, 12});
    mp.insert({4, 45});
    mp.insert({5, 65});
    mp.insert({70, 1});
    mp.insert({-1, 109});

    map<int, int> :: iterator it = mp.begin();
    cout << "Map: " << endl;
     cout << "Sorted By key (Default) : " << endl;
    for (; it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    multimap<int, int> mmp;

    for (it = mp.begin(); it != mp.end(); it++) {
        mmp.insert({it->second, it->first});
    }

    multimap<int, int> :: iterator i = mmp.begin();
     cout << "Sorted By Value : " << endl;
    for (; i != mmp.end(); i++) {
        cout << i->second << " " << i->first << endl;
    }
    return 0;
}