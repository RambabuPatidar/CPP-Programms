#include <bits/stdc++.h>
using namespace std;

// to detect cycle in undirected graph we will keep track of the parent node 
// if the nbr of a vertex is visited and not its parent that means cycle is present.
// we have to keep track of parent because in undirected graph visited node can be its parent 
// which is not considered as back edge.

// This will give runtime error so we have to do something else.
// what can be the cause of runtime error, in these: might be because the node have to go in internal stack
// of recursion call 
// so how can we deal with these?
// we can with the help of another traversal : Breadth first search.

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
        list[nbr].push_back(src);
    }

    vector<int> getList(int src)
    {
        return list[src];
    }

    bool detectCycle(Graph &graph);

    bool dfsUtil(Graph &, int, vector<bool> &, int);
};

bool Graph::detectCycle(Graph &graph)
{
    vector<bool> visited(n, false);
    vector<bool> psf(n, false);

    for (int i = 0; i < n; i++)
    {
        int parent = -1;
        if (!visited[i])
        {
            if (dfsUtil(graph, i, visited, parent))
            {
                return true;
            }
        }
    }

    return false;
}

bool Graph::dfsUtil(Graph &graph, int src, vector<bool> &visited, int parent)
{

    visited[src] = true;

    // go to neighbourss

    for (int nbr : graph.getList(src))
    {
        if (!visited[nbr])
        {
            bool isCyclic = dfsUtil(graph, nbr, visited, src);

            if (isCyclic)
            {
                return true;
            }
        }
        else if (nbr != parent)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int n = 7;
    Graph graph(n);
    // vector<vector<int>> edges = {{0, 1}, {0, 3}, {1, 2}, {2, 3}, {4, 1}, {4, 5}, {5, 6}, {6, 4}};
    vector<vector<int>> edges = {{0, 1}, {2, 6}, {1, 2}, {2, 3}, {3, 4}, {3, 5}};

    for (int i = 0; i < edges.size(); i++)
    {
        graph.addEdge(edges[i][0], edges[i][1]);
    }

    bool isCycle = graph.detectCycle(graph);

    if (isCycle)
    {
        cout << "Cycle Present" << endl;
    }
    else
    {
        cout << "No Cycle Present" << endl;
    }

    return 0;
}