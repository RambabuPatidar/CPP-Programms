#include <bits/stdc++.h>
using namespace std;

// adjacency list representation with O(v^2) time complexity.
// as we have to find minimum every time manually.

class Graph
{
private:
    int n;
    list<pair<int, int>> *adjList;

public:
    Graph(int n)
    {
        this->n = n;
        this->adjList = new list<pair<int, int>>[n];
    }

    void addEdge(int src, int nbr, int wt)
    {
        adjList[src].push_back({nbr, wt});
        adjList[nbr].push_back({src, wt});
    }

    list<pair<int, int>> getList(int src)
    {
        return adjList[src];
    }

    int size()
    {
        return n;
    }
};

int minValueIndex(vector<int> distance, vector<int> processedVertex)
{
    int minimum = INT_MAX;
    int minIdx = -1;

    for (int i = 0; i < distance.size(); i++)
    {
        if (processedVertex[i] == false && distance[i] < minimum)
        {
            minimum = distance[i];
            minIdx = i;
        }
    }

    return minIdx;
}

vector<int> dijkstraAlgorithm(Graph &graph)
{
    vector<int> processedVertex(graph.size(), false);
    vector<int> distance(graph.size(), INT_MAX);
    distance[0] = 0;

    for (int i = 0; i < graph.size(); i++)
    {
        int vertex = minValueIndex(distance, processedVertex);

        list<pair<int, int>>::iterator it = graph.getList(vertex).begin();
        for (; it != graph.getList(vertex).end(); it++)
        {
            if (!processedVertex[it->first]) {
                if (distance[vertex] + it->second < distance[it->first])
                {
                    distance[it->first] = distance[vertex] + it->second;
                }
            }
        }
        processedVertex[vertex] = true;
    }

    return distance;
}

int main()
{

    int n = 7;
    Graph graph(n);
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 6}, {1, 3, 5}, {2, 3, 8}, {3, 5, 15}, {3, 4, 10}, {4, 5, 6}, {4, 6, 2}, {5, 6, 6}};

    for (vector<int> edge : edges)
    {
        graph.addEdge(edge[0], edge[1], edge[2]);
    }

    for (int num : dijkstraAlgorithm(graph))
    {
        cout << num << " ";
    }
    return 0;
}