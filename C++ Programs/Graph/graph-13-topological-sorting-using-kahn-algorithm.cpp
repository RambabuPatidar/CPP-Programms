#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/topological-sorting-indegree-based-solution/
// https://leetcode.com/problems/course-schedule/description/

// to have more fun also try these: https://www.geeksforgeeks.org/all-topological-sorts-of-a-directed-acyclic-graph/

class Graph {
    private:
    int n;
    vector<int> * list;

    public:

    Graph(int n): n(n) {
        list = new vector<int>[n];
    }

    void addEdge(int src, int nbr) {
        list[src].push_back(nbr);
    }

    vector<int> getList(int src) {
        return list[src];
    }

    vector<int> kahnAlgorithm(Graph &);
};

vector<int> Graph::kahnAlgorithm(Graph & graph) {

    // store indegree of the vertex in a array 
    vector<int> indegree(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < list[i].size(); j++) {
            indegree[list[i][j]]++;
        }
    }
    // make a queue and push all the vertex which has indegree 0.
    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }


    vector<int> topo_sort;
    
    // now while our q is not empty we go to the neighbour of vertex and decrease its indegree
    // if we found some vertex having 0 indegree after substracting we add that in queue.
    // if we can able to visit all the vertex then the graph is DAG(directed acyclic graph) otherwise
    // the graph contain cycle because the indegree of cycle vertex can never be made 0.

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        topo_sort.push_back(front);

        for (int nbr: list[front]) {
            indegree[nbr]--;
            if (indegree[nbr] == 0) {
                q.push(nbr);
            }
        }
    }

    return topo_sort;
}

int main(){
    int n = 6;
    Graph graph(n);

    vector<vector<int>> edges = {{5, 0}, {4, 0}, {5, 2}, {4, 1}, {2, 3}, {3, 1}};

    for (vector<int> edge : edges)
    {
        graph.addEdge(edge[0], edge[1]);
    }


    vector<int> topo_sort = graph.kahnAlgorithm(graph);
    for (int num: topo_sort) {
        cout << num << " ";
    }
    return 0;
}