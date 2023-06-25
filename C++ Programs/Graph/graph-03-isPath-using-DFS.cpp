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
    if (startV == endV) {
        return true;
    }

    visited[startV] = true;

    for (int nbr: adjList[startV]) {
        if (!visited[nbr]) {
            bool isNbPath = isPath(nbr, endV);
            if (isNbPath) {
                return true;
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