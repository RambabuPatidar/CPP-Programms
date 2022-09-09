#include<bits/stdc++.h>
using namespace std;

class Graph {
    int v;
    vector<list<int>> adj;
    public : 
    Graph (int v);
    void addEdge(int v , int w);

    void BFS(int s);
};

Graph::Graph(int v) {
    this->v = v;
    adj.resize(v);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);

}
void Graph::BFS(int s) {
    vector<bool> visited;
    visited.resize(v, false);

    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    while(!queue.empty()) {
        s = queue.front();
        cout << s << " "; 
        queue.pop_front();
        for(auto adjecent:adj[s]) {
            if (!visited[adjecent]) {
                visited[adjecent] = true;
                queue.push_back(adjecent);

            }
        }
    }
}


int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    
    g.BFS(0);
    return 0;
}