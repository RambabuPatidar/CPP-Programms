#include <bits/stdc++.h>
using namespace std;

enum Color {WHITE, GRAY, BLACK};

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
        // list[nbr].push_back(src);
    }

    vector<int> getList(int src)
    {
        return list[src];
    }

    bool detectCycle(Graph &graph);

    bool dfsUtil(Graph &, int, vector<int> &);
};

bool Graph::detectCycle(Graph &graph)
{
    vector<int> color(n, WHITE);

    for (int i = 0; i < n; i++)
    {
        if (color[i] == WHITE)
        {
            if (dfsUtil(graph, i, color))
            {
                return true;
            }
        }
    }

    return false;
}

bool Graph::dfsUtil(Graph &graph, int src, vector<int> &color)
{

    color[src] = GRAY;
    // go to neighbourss

    for (int nbr : graph.getList(src))
    {
        if (color[nbr] == WHITE)
        {
            bool isCyclic = dfsUtil(graph, nbr, color);

            if (isCyclic)
            {
                return true;
            }
        }
        else if (color[nbr] == GRAY)
        {
            return true;
        }
    }
    color[src] = BLACK;
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