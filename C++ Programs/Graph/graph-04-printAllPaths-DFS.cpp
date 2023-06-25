#include<bits/stdc++.h>
using namespace std;

class Graph{
    int n; // number of vertex

    map<int, vector<int>> mp;

    bool* visited;
    public:
    Graph(int n): n(n) {
        this->visited = new bool[n];
    }
    void addEdge(int vertex, int nbr);
    void printAllPaths(int , int, string);
};

void Graph:: addEdge(int vertex, int nbr) {
    mp[vertex].push_back(nbr);
    mp[nbr].push_back(vertex);
}

void Graph:: printAllPaths(int startV, int endV, string path) {
    if (startV == endV) {
        cout << path << endl;
        return;
    }

    visited[startV] = true;

    for(int nbr: mp.find(startV)->second){
        if (!visited[nbr]) {
            printAllPaths(nbr, endV, path + (char)(nbr + '0'));
        }
    }    

    visited[startV] = false;
}

int main() {
    Graph graph(7);
    graph.addEdge(1-1, 3-1);
    graph.addEdge(1-1, 2-1);
    graph.addEdge(2-1, 4-1);
    graph.addEdge(3-1, 4-1);
    graph.addEdge(3-1, 5-1);
    graph.addEdge(5-1, 6-1);
    graph.addEdge(5-1, 7-1);
    graph.addEdge(6-1, 7-1);

    graph.printAllPaths(0, 6, "0");
    return 0;
}