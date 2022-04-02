#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int hh, mm;
            string meridian;
        vector<pair<int,pair<int,string>>> scheduledTime;
        cin>>hh>>mm>>meridian;
        scheduledTime.push_back(make_pair(hh,make_pair(mm, meridian)));
        vector<pair<int, pair<int, string>>> friendTime;

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            
            cin >> hh >> mm >> meridian;
            friendTime.push_back(make_pair(hh, make_pair(mm, meridian)));
        }
        for (int i = 0; i < n; i++)
        {
            cout << friendTime[i].first << friendTime[i].second.first << friendTime[i].second.second << endl;
        }

        // all the input work had done now only do the main thing in the question 
    }

    return 0;
}