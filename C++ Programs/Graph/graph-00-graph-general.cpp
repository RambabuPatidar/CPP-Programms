#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    int n;
    vector<int> *list;

public:
    Graph(int n)
    {
        this->n = n;
        list = new vector<int>[n];
    }

    void addEdge(int v1, int v2)
    {
        list[v1].push_back(v2);
        list[v2].push_back(v1);
    }

    int size()
    {
        return n;
    }

    vector<int> getList(int src)
    {
        return list[src];
    }
};

void dfs(Graph graph, int src, vector<int> &visited)
{

    visited[src] = 1;
    cout << src << " ";

    for (int nbr : graph.getList(src))
    {
        if (!visited[nbr])
        {
            dfs(graph, nbr, visited);
        }
    }
}

void printAllPaths(Graph graph, int src, int dst, vector<int> &visited, string path)
{
    if (src == dst)
    {
        path += to_string(src);

        if (path.length() == graph.size())
        {
            cout << path << " ";
        }
        return;
    }

    visited[src] = 1;
    path += to_string(src);

    for (int nbr : graph.getList(src))
    {
        if (!visited[nbr])
        {
            printAllPaths(graph, nbr, dst, visited, path);
        }
    }
    visited[src] = 0;
}

void hamiltonian(Graph graph, int src, vector<int> &visited, string path)
{

    if (path.size() == graph.size() - 1)
    {
        path += to_string(src);
        cout << path << " ";
        return;
    }

    visited[src] = 1;
    path += to_string(src);

    for (int nbr : graph.getList(src))
    {
        if (!visited[nbr])
        {
            hamiltonian(graph, nbr, visited, path);
        }
    }
    visited[src] = 0;
}

void bfs(Graph graph, int src)
{
    queue<int> q;
    q.push(src);
    vector<int> visited(graph.size(), 0);
    visited[src] = 1;

    while (!q.empty())
    {
        src = q.front();
        q.pop();
        cout << src << " ";

        // visit all its neighbour
        for (int nbr : graph.getList(src))
        {
            if (!visited[nbr])
            {
                visited[nbr] = 1;
                q.push(nbr);
            }
        }
    }
}

void iterativeDFS(Graph graph, int src)
{
    stack<int> st;
    st.push(src);
    vector<int> visited(graph.size(), 0);
    visited[src] = 1;

    while (!st.empty())
    {
        src = st.top();
        st.pop();

        cout << src << " ";

        // visit all the neighbours
        for (int nbr : graph.getList(src))
        {
            if (!visited[nbr])
            {
                visited[nbr] = 1;
                st.push(nbr);
            }
        }
    }
}

int main()
{

    Graph graph(7);

    vector<vector<int>> edges = {{0, 3}, {0, 1}, {1, 2}, {2, 3}, {2, 5}, {3, 4}, {4, 5}, {5, 6}, {4, 6}};

    for (int i = 0; i < edges.size(); i++)
    {
        graph.addEdge(edges[i][0], edges[i][1]);
    }

    vector<int> visited(graph.size(), 0);
    iterativeDFS(graph, 0);
    return 0;
}