#include<bits/stdc++.h>
using namespace std;

void insertAdj(list<int> li[], int u, int v) {
    li[u].push_back(v);
    li[v].push_back(u);
    return ;
}

void printGraph(list<int> li[], int n) {
    for(int i=0; i<n ;i++) {
        cout << "adjacency list for index " << i << " is :" << endl;
        for(auto j:li[i]) {
            cout << j << "->";
        }
        cout <<"NULL" <<  endl;
    }
}

void breadthFirstSearch(list<int> li[], int n, int s) {
    queue<int> q;
    int arr[n] = {0};
    q.push(s);
    arr[s] = 1;
    while( q.empty() == false) {
        int temp = q.front();
        q.pop();
        cout << temp << " ";

        for(auto i: li[temp]) {
            if( arr[i] != 1) {
                q.push(i);
                arr[i] =1;
            }
            
        }

    }
}

int main(){

    int n;
    n = 6;

    list<int > li[n];

    // graph image is available here 
    // https://www.tutorialspoint.com/assets/questions/media/20529/graph_adjacency_list.jpg

    // i had implemented this code myself after watching picture visualisation.

    insertAdj(li, 0, 1);
    insertAdj(li, 0, 4);
    insertAdj(li, 0, 5);
    insertAdj(li, 1, 2);
    insertAdj(li, 1, 5);
    insertAdj(li, 2, 3);
    insertAdj(li, 2, 5);
    insertAdj(li, 3, 4);
    insertAdj(li, 3, 5);
    insertAdj(li, 4, 5);

    printGraph(li, n);
    cout << "The breadth first traversal of graph is " << endl;
    breadthFirstSearch(li, n, 3);
    return 0;
}