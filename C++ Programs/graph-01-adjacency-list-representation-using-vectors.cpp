#include<iostream>
#include<vector>
using namespace std;

void insertEdge(vector<int> *vect, int  v, int u) {
    vect[v].push_back(u);
    vect[u].push_back(v);
    return ;
}

void printGraph(vector<int> *vect, int n) {
    for(int i=0; i<n;i++) {
        cout << "adjacency list of vetex " << i << endl;
        for(auto j: vect[i]) {
            cout << j << "->";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> *v;
    v = new vector<int>[n];

    insertEdge(v, 0, 1);
    insertEdge(v, 1, 2);
    insertEdge(v, 1, 4);
    insertEdge(v, 1, 3);
    insertEdge(v, 2, 3);
    insertEdge(v, 3, 4);
    insertEdge(v, 4, 0);

    printGraph(v, n);
    
    return 0;
}