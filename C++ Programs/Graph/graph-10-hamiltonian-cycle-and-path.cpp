#include<bits/stdc++.h>
using namespace std;

// question here is that print all the hamiltonian paths and the paths which are cycle also 
// put a star behind them.

// This is a new way we can represent the graph and here instead of only storing the nbrs
// we will store the src and nbr both.
// we can store only the nbr with this method also. but that will become much similar 
// to the normal list representation as we will only have one variable in class
// the main advantage in this is that we can also add the weight of the edges 

class Edge{
    int src;
    int nbr;

    public:

    Edge(int src, int nbr) : nbr(nbr){
        this->src = src;
    }

    pair<int, int> getEdges() {
        pair<int, int> p(this->src, this->nbr);
        return p;
    }
};

void addEdge(vector<vector<Edge>> &adjList ,int v1, int v2){
    Edge edge(v1, v2);
    adjList[v1].push_back(edge);
    Edge edgeRev(v2, v1);
    adjList[v2].push_back(edgeRev);
}

void printGraph(vector<vector<Edge>> adjList) {
    int k = 0;
    for (vector<Edge> vectors : adjList) {
        cout << "vertex " << k++ << " -> " ;
        for (Edge edges: vectors) {
            pair<int, int> p = edges.getEdges();
            cout << p.first << " " << p.second << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void hamiltonian(vector<vector<Edge>> adjList, vector<bool> visited,
                 string pathSoFar, int src, int count, int orgSrc) {

    if (count == adjList.size() - 1) {
        cout << pathSoFar << " ";

        bool  cycle = false;
        for (Edge edges: adjList[src]) {
            pair<int, int> p  = edges.getEdges();
            if (p.second == orgSrc) {
                cycle = true;
                break;
            }
        }

        if (cycle) {
            cout << " *(cycle) " << endl;
        } else {
            cout<< " .(path) " << endl;
        }
        return;
    }

    visited[src] = true;
    for (Edge edges: adjList[src]) {
        pair<int, int> p = edges.getEdges();
        if (!visited[p.second]){
            hamiltonian(adjList, visited, pathSoFar + char(p.second + '0'), p.second, count + 1, orgSrc);
        }
    }
    visited[src] = false;
}


int main() {
    
    vector<vector<Edge>> adjList(7);

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 2, 4);
    addEdge(adjList, 4, 5);
    addEdge(adjList, 4, 6);
    addEdge(adjList, 5, 6);
    addEdge(adjList, 3, 5);

    printGraph(adjList);

    vector<bool> visited(7, false);

    hamiltonian(adjList, visited, "0", 0, 0,0);
    return 0;
}