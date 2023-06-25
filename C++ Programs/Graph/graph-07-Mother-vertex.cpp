#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/find-a-mother-vertex-in-a-graph/
// extension of the previous question. 
// only diff is we are here taking directed graph 
// and changing the graph.


// This is brute force approach.
// Effiecient algorithm is: Kosaraju’s Strongly Connected Component Algorithm.
void addEdge(vector<int> adjList[] , int v1, int v2) {
    adjList[v1].push_back(v2);
    // adjList[v2].push_back(v1);
}

void printGraph(vector<int> adjList[], int n) {
    for(int i = 0; i < n; i++) {
        vector<int> v = adjList[i];
        cout << "vertex " << i << " =>";
        for(int nums: v) {
            cout << nums << " ";
        }
        cout << endl;
    }
}

void isPath(vector<int> adjList[], bool visited[], vector<int> &path, int src) {

    visited[src] = true;
    path.push_back(src);
    for (int nbr: adjList[src]) {
        if (!visited[nbr]) {
            isPath(adjList, visited, path, nbr);
        }
    }
}

int main(){

    vector<int> adjList[7];

    for (int i = 0; i < 7; i++) {
        vector<int> v;
        adjList[i] = v;
    }

    // addEdge(adjList, 0, 1);
    // addEdge(adjList, 0, 2);
    // addEdge(adjList, 1, 3);
    // addEdge(adjList, 4, 1);
    // addEdge(adjList, 5, 2);
    // addEdge(adjList, 6, 4);
    // addEdge(adjList, 6, 0);
    // addEdge(adjList, 5, 6);

    addEdge(adjList, 0, 3);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 1, 0);
    addEdge(adjList, 3, 1);
    addEdge(adjList, 3, 4);
    addEdge(adjList, 4, 5);
    addEdge(adjList, 4, 6);
    addEdge(adjList, 5, 6);

    printGraph(adjList, 7);
    for (int i = 0;i < 7; i++) {
        bool visited[7] = {false};
        vector<int> path;
        isPath(adjList, visited, path,i);
        if (path.size() == 7) {
            cout<< "mother Vertex " << i <<" and Path is => ";
            for (int nums: path) {
                cout << nums << " " ;
            }
            cout << endl<< endl;
        }
    }
    
    

    return 0;
}