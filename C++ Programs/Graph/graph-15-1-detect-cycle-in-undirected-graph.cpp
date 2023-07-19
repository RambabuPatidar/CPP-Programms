#include<bits/stdc++.h>
using namespace std;

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
    bool bfsUtil(Graph & graph, int src, vector<bool>& visited, queue<int>& q);

};

bool Graph::detectCycle(Graph & graph) {
    queue<int> q;

    vector<bool> visited(this->n, false);

    for (int i = 0; i < this->n; i++) {
        if (!visited[i]) {
            if (bfsUtil(graph, i, visited, q)) {
                return true;
            }
        }

    }
    return false;
}

bool Graph::bfsUtil(Graph &graph, int src, vector<bool> &visited, queue<int> &q) {
    q.push(src);

    while (q.empty() != true) {
        int vrtx = q.front();
        q.pop();

        if (!visited[vrtx]) {
            visited[vrtx] = true;

            for (int nbr: graph.getList(vrtx)) {
                if (!visited[nbr]) {
                    q.push(nbr);
                }
            }
        }
        else {
            return true;
        }
    }

    return false;
}

    int main()
{

    int n = 7;
    Graph graph(n);
    vector<vector<int>> edges = {{0, 1}, {0, 3}, {1, 2}, {2, 3}, {4, 1}, {4, 5}, {5, 6}, {6, 4}};
    // vector<vector<int>> edges = {{0, 1}, {2, 6}, {1, 2}, {2, 3}, {3, 4}, {3, 5}};

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