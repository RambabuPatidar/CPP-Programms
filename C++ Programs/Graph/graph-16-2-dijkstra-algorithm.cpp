#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> myPair;

class Edge {
    public:
    int src;
    int nbr;
    int wt;

    Edge() {
        this->src = 0;
        this->nbr = 0;
        this->wt = 0;
    }

    Edge(int src, int nbr, int wt) {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

class Graph: public Edge {
    private:
    int n;
    vector<Edge> * adjList;

    public: 
    Graph (int n) {
        this->n = n;
        this->adjList = new vector<Edge>[n];
    }

    void addEdge(int src, int nbr, int wt) {
        Edge edge1(src, nbr, wt);
        adjList[src].push_back(edge1);

        Edge edge2(nbr, src, wt);
        adjList[nbr].push_back(edge2);
    }

    vector<Edge> getList(int src) {
        return adjList[src];
    }

    int size() {
        return n;
    }

};

vector<int> dijkstraAlgorithm(Graph& graph, int src) {
    vector<int> distance(graph.size(), INT_MAX);
    distance[0] = 0;

    priority_queue<myPair, vector<myPair>, greater<myPair>> pq;

    pq.push(make_pair(0, src));

    while (!pq.empty()) {
        int vertex = pq.top().second;
        int currDist = pq.top().first;

        pq.pop();

        for (Edge edge: graph.getList(vertex)) {

            int nbr = edge.nbr;
            int wt = edge.wt;

            if (currDist + wt < distance[nbr]) {
                distance[nbr] = currDist + wt;
                pq.push(make_pair(distance[nbr], nbr));
            }
        }
    }

    return distance;

}

int main(){
    int n = 7;
    Graph graph(n);

    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 6}, {1, 3, 5}, {2, 3, 8}, {3, 5, 15}, {3, 4, 10}, {4, 5, 6}, {4, 6, 2}, {5, 6, 6}};

    for (vector<int> edge : edges)
    {
        graph.addEdge(edge[0], edge[1], edge[2]);
    }

    for(int num: dijkstraAlgorithm(graph, 0)) {
        cout <<  num << " ";
    }
    return 0;
}