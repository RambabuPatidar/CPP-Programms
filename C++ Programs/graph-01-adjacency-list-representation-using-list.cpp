#include<bits/stdc++.h>
using namespace std;

void insertEdge(list<int> li[], int u, int v) {
    li[u].push_back(v);
    li[v].push_back(u);
    return ;
}

void printGraph(list<int> li[], int n) {
    for(int i=0; i<n ;i++) {

        cout << "adjacency list of " << i << " index is " << endl;

        for(auto j : li[i]) {
            cout << j << "->";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    list<int> li[n];
    insertEdge(li, 0,1);
    insertEdge(li, 0,5);
    insertEdge(li, 0,4);
    insertEdge(li, 1,2);
    insertEdge(li, 1,5);
    insertEdge(li, 2,5);
    insertEdge(li, 2,3);
    insertEdge(li, 3,5);
    insertEdge(li, 3,4);
    insertEdge(li, 4,5);
    
    printGraph(li, n);
    return 0;
}