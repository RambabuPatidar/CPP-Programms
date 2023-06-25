#include<bits/stdc++.h>
using namespace std;

/* and there are lot more representation we can use to represent the graph
anything with which we can represent our vertex and store the nbr of that 
vertex can be used such as
list<int> adjList[5];
list<list<int>> adjList;
vector<vector<int>> adjList
vector<int> arr[5];

even we can use queue data struture just we want is the container and the 
value of vertex with which we can associate this container
 */
class Graph{
private:
	int n; // number of vertices 
	set<int>* adjList;

public:
	Graph* createGraph(int n) {
		Graph* graph = new Graph();
		graph->n = n;
		graph->adjList = new set<int>[n];
	    return graph;
	}

	void addEdge(int v1, int v2) {
		this->adjList[v1].insert(v2);
		this->adjList[v2].insert(v1);
	}

	void printGraph();
};

void Graph::printGraph() {
	for (int i =0 ; i < n ; i ++) {
		set<int> :: iterator it = adjList[i].begin();
		cout << i + 1 << " list:=> ";
		for( ; it != adjList[i].end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
}

int main() { // 1
	Graph* graph;
	graph =  graph->createGraph(5);
    	graph->addEdge( 0, 1);
    	graph->addEdge( 0, 4);
    	graph->addEdge( 1, 2);
    	graph->addEdge( 1, 3);
    	graph->addEdge( 1, 4);
    	graph->addEdge( 2, 3);
    	graph->addEdge( 3, 4);

	graph->printGraph();
return 0;
}