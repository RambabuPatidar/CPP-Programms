// Q. Does a path exist in the graph from given vertex A to B. if yes, return true or false.

#include<bits/stdc++.h>
using namespace std;

class Graph{
    int n;
    vector<int>* adjList;
    vector<bool> visited;
    public:

    Graph(int n) {
        this->n = n;
        this->adjList = new vector<int>[n];
        this->visited.resize(n);
    }

    void addEdge(int vertex, int nbr);

    bool isPath(int startV, int endV) ;
};

void Graph:: addEdge(int vertex, int nbr) {
    adjList[vertex].push_back(nbr);
    adjList[nbr].push_back(vertex);
}   

bool Graph:: isPath(int startV, int endV) {
    // base case as the startV is not getting compared in the while loop.
    if (startV == endV) {
        return true;
    }

    queue<int> q;

    q.push(startV);
    visited[startV] = true;
    
    while (!q.empty()) {

        int v = q.front();
        q.pop();

        for (int nbr: adjList[v]) {
            if (!visited[nbr]) {
                if (nbr == endV) {
                    return true;
                }
                visited[nbr] = true;
                q.push(nbr);
            }
        }
    }

    return false;
}

int main() {


    Graph graph(7);
    graph.addEdge(1-1, 3-1);
    graph.addEdge(1-1, 2-1);
    graph.addEdge(2-1, 4-1);
    graph.addEdge(3-1, 4-1);
    graph.addEdge(3-1, 5-1);
    graph.addEdge(5-1, 6-1);
    graph.addEdge(5-1, 7-1);
    graph.addEdge(6-1, 7-1);

    cout << graph.isPath(0, 6);
    return 0;
}