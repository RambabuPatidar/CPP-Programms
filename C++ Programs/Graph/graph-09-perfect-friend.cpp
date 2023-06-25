#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int n ;
    vector<int> * adjList;
    bool *visited;
    
    public:
    Graph(int n){
        this->n = n;
        this->adjList = new vector<int>[n];
        this->visited = new bool[n];
    }

    void addEdge(int v1, int v2) {
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }

    // this is basically dfs
    void getComponent(int src, int &size) {

        visited[src] = true;
        size++;

        for (int nbr: adjList[src]) {
            if (!visited[nbr]) {
                getComponent(nbr, size);
            }
        }
    }
    int allWays() {
        vector<int> allCompSize;
        for (int i = 0;i < n; i ++) {
            if (!visited[i]) {
                int size = 0;
                getComponent(i, size);
                allCompSize.push_back(size);
            }
        }

        // now we have size of all disconnected component so that we can find the number of pairs
        // which can be made with different club.
        int ans = 0;
        for (int i = 0;i < allCompSize.size(); i++) {
            for(int j = i + 1; j < allCompSize.size(); j++) {
                ans += allCompSize[i] * allCompSize[j];
            }
        }
        return ans;
    }
};

int main() {
  int n;
  cin >> n;

  int k;
  cin >> k;

  // write your code here

  Graph graph(n);
  for (int i = 0;i < k ; i++) {
      int a, b;
      cin >> a >> b;
      graph.addEdge(a, b);
  }

    int ways = graph.allWays();
    cout << ways << endl;
  return 0;
}
