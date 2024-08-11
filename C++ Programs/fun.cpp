#include <bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>> &adj) {
    queue<int> q;
    vector<int> visited(adj.size(), 0);

    q.push(0);
    visited[0] = 1;

    int depth = 0;
    while (!q.empty()) {
        int n = q.size();
        depth++;
        for (int i = 1; i <= n; i++) {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (int nbr: adj[node]) {
                if (!visited[nbr]) {
                    visited[nbr] = 1;
                    q.push(nbr);
                }
            }
        }

        cout << " null ";
    }

    cout << endl << "The depth of the graph is " << depth << endl;
}

int main()
{
    int n = 7;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 3}, {1, 3}, {1, 4}, {4, 5}, {4, 6}, {5, 6}};

    vector<vector<int>> adj(n, vector<int>());
    
    for (int i = 0; i < edges.size(); i++) {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    bfs(adj);
    return 0;
}