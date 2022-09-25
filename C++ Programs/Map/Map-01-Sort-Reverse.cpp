#include<bits/stdc++.h>
using namespace std;

int main(){
    // Learning to get the reverse sorted by keys.


    // less<int> is used by default 
    map<int, int, greater<int> > mp;
    mp[1] = 12;
    mp[2] = 13;
    mp[3] = 14;
    mp[-1] = 10;
    mp[-98] = 122;

    map<int, int> :: iterator it;
    it = mp.begin();
    cout << "Map : " << endl;
    for (; it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // can be usedn in multimaps also 

    cout << "Multimap : " << endl;
    multimap <int, string, greater<int> > mmp;
    mmp.insert({67, "Rambabu Patidar"});
    mmp.insert({02, "Abhishek Sharma"});
    mmp.insert({44, "Neeraj Gupta"});
    mmp.insert({23, "Dristi Rana"});
    mmp.insert({21, "Devvrat Upadhay"});

    multimap<int, string> :: iterator i = mmp.begin();

    for(; i != mmp.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}