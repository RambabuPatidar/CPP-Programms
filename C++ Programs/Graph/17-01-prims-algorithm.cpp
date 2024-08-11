#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> myPair;

vector<myPair> primsAlgo(vector<vector<pair<int, int>>> &adjList, int n)
{
    priority_queue<myPair, vector<myPair>, greater<myPair>> pq;

    vector<myPair> MSTPairs;

    vector<int> visited(n, 0);

    pq.push({0, {0, 0}});

    while (!pq.empty() && MSTPairs.size() <= n - 1)
    {
        myPair minWtEdge = pq.top();
        int wt = minWtEdge.first;
        int u = minWtEdge.second.first;
        int v = minWtEdge.second.second;
        pq.pop();

        if (visited[v]) continue;

        if (u != v) { // to handle the case where we don't push the first imagnary src
            MSTPairs.push_back({wt, {u, v}});
        }

        visited[v] = 1;

        for (pair<int, int> nbrPair : adjList[v])
        {
            int nbrNode = nbrPair.first;
            int wt = nbrPair.second;
            if (!visited[nbrNode])
            {
                pq.push({wt, {v, nbrNode}});
            }
        }
    }

    return MSTPairs;
}

int main ()  {
    int n = 9;
    vector<vector<int>> edgesWeight = {
        {0, 1, 4},
        {0, 7, 8},
        {1, 2, 8},
        {1, 7, 11},
        {7, 6, 1},
        {7, 8, 7},
        {2, 3, 7},
        {2, 5, 4},
        {2, 8, 2},
        {8, 6, 6},
        {6, 5, 2},
        {3, 5, 14},
        {3, 4, 9},
        {5, 4, 10},
    };

    vector<vector<pair<int, int>>> adjList(n, vector<pair<int, int>>());
    for (int i =0 ; i < edgesWeight.size(); i++) {
        adjList[edgesWeight[i][0]].push_back({edgesWeight[i][1], edgesWeight[i][2]});
        adjList[edgesWeight[i][1]].push_back({edgesWeight[i][0], edgesWeight[i][2]});
    }

    vector<myPair> mst = primsAlgo(adjList, n);
    for (myPair p: mst) {
        cout << p.second.first << "->" << p.second.second << " " << p.first << endl;
    }
    return 0;
}