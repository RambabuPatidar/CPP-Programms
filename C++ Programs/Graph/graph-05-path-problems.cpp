#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int nbr;
    int wt;

    Edge(int nbr , int wt) {
        this->nbr = nbr;
        this->wt = wt;
    }
};

class Graph{
    int n;

    vector<list<Edge>> adjList;

    bool* visited;

    public:

    Graph(int n) {
        this->n = n;
        this->visited = new bool[n];
        this->adjList.resize(n);
    }

    void addEdge(int vertex, int nbr, int wt);

    void printGraph();
};

void Graph:: addEdge(int vertex, int nbr, int wt) {
    adjList[vertex].push_back(Edge(nbr, wt));
    adjList[nbr].push_back(Edge(vertex, wt));
}

void Graph:: printGraph() {
    for (int i = 0; i < adjList.size(); i++) {
        cout << "list " << i  << " :-> ";
        for(auto it: adjList[i]){
            cout << it.nbr << "|" << it.wt << ", ";
        }
        cout << endl;
    }
}

// Code here all question which is done in one question


int main(){

    Graph graph(7);
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 3, 40);
    graph.addEdge(1, 2, 10);
    graph.addEdge(3, 2, 10);
    graph.addEdge(3, 4, 2);
    graph.addEdge(4, 5, 3);
    graph.addEdge(4, 6, 8);
    graph.addEdge(5, 6, 3);

    graph.printGraph();
    return 0;
}