// this problem is also known as get all the connected components.
// the only difference is that in traversal we print the values directly 
// in the connected components question we have to store ans in list of list in which '
// inner list contain the connected components.

#include<bits/stdc++.h>
using namespace std;

void insertAdj(list<int> adjList[], int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}


void breadthFirstSearch(list<int> adjList[], int n, int src) {
    vector<int> visited(n, 0);

    queue<int> q;

    // you are given that u have to perfrom bfs from src vertex 
    // and we need to traverse all nodes also for disconnected condition
    
    for (int i = 0; i < n; i++) {
        int currNode = (src + i) % n;
        if (visited[currNode] != 1) {
            q.push(currNode);
            visited[currNode]  = 1;

            while (!q.empty()) {
                int node  = q.front();
                q.pop();
                cout << node << " ";
                for (int nbr: adjList[node]) {
                    if (visited[nbr] != 1) {
                        visited[nbr] = 1;
                        q.push(nbr);
                    }
                }
            }
        }
    }
}

int main(){

    int n;
    n = 6;

    list<int > li[n];

    insertAdj(li, 0, 1);
    insertAdj(li, 0, 4);
    insertAdj(li, 0, 5);
    insertAdj(li, 2, 3);
    insertAdj(li, 2, 5);
    insertAdj(li, 3, 5);

    cout << "The breadth first traversal of graph is " << endl;
    breadthFirstSearch(li, n, 3);
    return 0;
}