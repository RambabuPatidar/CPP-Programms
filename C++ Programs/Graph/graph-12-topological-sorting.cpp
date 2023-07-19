#include<bits/stdc++.h>
using namespace std;

// resource: https://www.geeksforgeeks.org/topological-sorting/
// Topological Sorting using DFS.

class Graph {
    private:
    int n;
    vector<int>* list;
    
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
};

void topologicalSort(Graph &graph, int src, vector<bool> & visited, stack<int> &st) {
    visited[src] = true;

    // neighbour
    for (int nbr: graph.getList(src)) {
        if(!visited[nbr]) {
            topologicalSort(graph, nbr, visited, st);
        }
    }

    st.push(src);
}

int main(){
    int n = 6;
    Graph graph(n);

    vector<vector<int>> edges = {{5, 0}, {4, 0}, {5, 2}, {4, 1}, {2, 3}, {3, 1}};

    for (vector<int> edge: edges) {
        graph.addEdge(edge[0], edge[1]);
    }

    vector<bool> visited(n, false);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topologicalSort(graph, i, visited, st);
        }
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}