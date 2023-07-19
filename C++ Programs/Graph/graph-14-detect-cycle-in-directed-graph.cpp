#include<bits/stdc++.h>
using namespace std;

// This problem can be done by kahn algorithm done above.
// In this code I will do it with the help of DFS.

// we use the fact that if the cycle exist in the graph then we will have a back edge.
// for detailed explaination go here:
// https://www.geeksforgeeks.org/detect-cycle-in-a-graph/

class Graph
{
private:
    int n;
    vector<int> *list;

public:
    Graph(int n) : n(n)
    {
        list = new vector<int>[n];
    }

    void addEdge(int src, int nbr)
    {
        list[src].push_back(nbr);
    }

    vector<int> getList(int src)
    {
        return list[src];
    }

    bool detectCycleUsingDFS(Graph& graph);

    bool dfsUtil(Graph&, int, vector<bool>&, vector<bool>&);
};


bool Graph::detectCycleUsingDFS(Graph &graph) {
    vector<bool> visited(n, false);
    vector<bool> psf(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (dfsUtil(graph, i, visited, psf))
            {
                return true;
            }
        }
    }

    return false;
}

bool Graph::dfsUtil(Graph & graph, int src, vector<bool> & visited, vector<bool>& psf) {
    
    visited[src] = true;
    psf[src] = true;

    // go to neighbourss

    for (int nbr: graph.getList(src)) {
        if (!visited[nbr]) {
            bool isCyclic = dfsUtil(graph, nbr, visited, psf);

            if (isCyclic) {
                return true;
            }
        } else if (psf[src]) {
            return true;
        }
    }

    psf[src] = false;
    return false;
}

int main(){

    int n = 7;
    Graph graph(n);
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {1, 2}, {2, 3}, {4, 1}, {4, 5}, {5, 6}, {6, 4}};

    for (int i = 0; i < edges.size(); i++) {
        graph.addEdge(edges[i][0], edges[i][1]);
    }

    bool isCycle = graph.detectCycleUsingDFS(graph);

    if (isCycle) {
        cout << "Cycle Present" << endl;
    } else {
        cout << "No Cycle Present" << endl;
    }

    return 0;
}