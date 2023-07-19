#include<bits/stdc++.h>
using namespace std;

string transpose(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }

    return s;
}
int maxEqualRowsAfterFlips(vector<vector<int>> &matrix)
{
    vector<string> v;
    unordered_map<string, int> ump;

    for (int i = 0; i < matrix.size(); i++)
    {
        string s = "";
        for (int j = 0; j < matrix[i].size(); j++)
        {
            s += to_string(matrix[i][j]);
        }
        ump[s]++;
    }

    unordered_map<string, int>::iterator it = ump.begin();
    int maximum = INT_MIN;
    
    while(!ump.empty())
    {
        it = ump.begin();
        int sum = 0;
        string s1 = it->first;
        cout << s1 << endl;
        sum = it->second;
        string s2 = transpose(s1);
        cout<< s2 << endl;
        unordered_map<string, int>::iterator temp = ump.find(s2);
        if (temp != ump.end())
        {
            sum += temp->second;
            ump.erase(temp);
        }
        maximum = max(maximum, sum);
        ump.erase(it);
    }
    return maximum;
}

int main(){

    vector<vector<int>> matrix =  { { 0, 0, 0 }, { 0, 0, 1 }, { 1, 1, 0 } };

    cout << maxEqualRowsAfterFlips(matrix);
     return 0;
}