#include<bits/stdc++.h>
using namespace std;

// Strongly Connected Component: a component in which there is path available between every pair from every vertex.
// if a graph has 1 SCC then the DFS of the tree produces 1 tree
// if a graph has more than 1 SCC then it may produce 1 tree or many forest depending upon the choosed vertex for dfs
// when Taking transpose of SCC the component remain SCC
// Go on GFG for detailed explaination on Kosraju algorithm.
// Watch video: https://www.youtube.com/watch?v=Rs6DXyWpWrI&t=7s&ab_channel=Techdose


// Q. Find number of SCCs and their nodes.
class Graph {
    private:
    int n;
    vector<int>* adjList;

    public:

    Graph(int n): n(n) {
        adjList = new vector<int>[n];
    }

    void addEdge(int , int);
    int size();
    vector<int> getList(int);

};

void Graph::addEdge(int src, int nbr) {
    adjList[src].push_back(nbr);
}

int Graph::size() {
    return n;
}

vector<int> Graph::getList(int src) {
    return adjList[src];
}


void dfs(Graph& graph, vector<bool> &visited, int src, stack<int> &st) {
    visited[src] = true;

    for (int nbr: graph.getList(src)) {
        if (!visited[nbr]) {
            dfs(graph, visited, nbr, st);
        }
    }

    st.push(src);
}

void dfs2(Graph& graph, vector<bool> &visited, int src, vector<int> &sccNodes) {
    visited[src] = true;
    sccNodes.push_back(src);

    for (int nbr: graph.getList(src)) {
        if (!visited[nbr]) {
            dfs2(graph, visited, nbr, sccNodes);
        }
    }
}

vector<vector<int>> getAllSSCs(Graph& graph, Graph& graphT) {

    // do the dfs and get all the nodes in stack acc to thier dfs time.

    vector<bool> visited(graph.size(), false);

    stack<int> st;
    dfs(graph, visited, 0, st);

    // transpose of the graph that we already got from main function

    // again traverse acc to the stack
    vector<bool> temp(graph.size(), false);
    visited = temp;

    vector<vector<int>> scc;
    while (!st.empty() ){
        int top = st.top();
        st.pop();

        if (!visited[top]) {
            vector<int> sccNodes;
            dfs2(graphT, visited, top, sccNodes);
            scc.push_back(sccNodes);
        }
    }

    return scc;
}


int main() {
    int n = 8;
    Graph graph(n);
    Graph graphT(n);
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}, {6, 4}, {4, 7}};

    for (vector<int> edge : edges)
    {
       graph.addEdge(edge[0], edge[1]);
       graphT.addEdge(edge[1], edge[0]);
    }

    vector<vector<int>> scc = getAllSSCs(graph, graphT);
    cout << "number of SCC in graph are " << scc.size() << endl;
    for(vector<int> nums: scc) {
        for (int num: nums) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}