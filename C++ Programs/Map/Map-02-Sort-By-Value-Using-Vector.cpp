#include<bits/stdc++.h>
using namespace std;


// this is the comparator function.
// can be replaced by lambda function learn about that.

// https://www.geeksforgeeks.org/lambda-expression-in-c/
bool cmp (pair<int, int> & p1, pair<int, int> & p2) {
    return p1.second < p2.second; 
}

int main(){

    map<int, int> mp;
    mp[8] = 12;
    mp[12] = 23;
    mp[5] = 89;
    mp[0]  = 100;

    // sort(mp.begin(), mp.end());
   // this will generate an error.


    map<int, int>:: iterator it = mp.begin();

    // make a vector of pair
    vector<pair < int, int> > vp;

    // push the map key-values into the pair of vectors 

    for (; it != mp.end(); it++) {
        vp.push_back({it->first, it->second});
    }

    // now sort this sequential container using the sort function for stl

    // sort(vp.begin(), vp.end())  // this will sort the first values (key of map) of pair
    // but we are trying to sort by second values (value of map);

    sort(vp.begin(), vp.end(), cmp);

    for (; it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // now we can print the vector so that it vomit the key-values sorted by values.

    for (int i = 0 ; i< vp.size(); i++) {
        cout << vp[i].first << " " << vp[i].second << endl;
    }


    // see this for more: https://stackoverflow.com/questions/2453425/how-can-i-sort-a-map-by-its-second-parameter
    return 0;
}