#include<bits/stdc++.h>
using namespace std;

void insertAdj(list<int> li[], int u, int v) {
    li[u].push_back(v);
    li[v].push_back(u);
    return ;
}

// we can write to see that what our graph looks
// but i am not writing it now ;

void DepthFirstSearchTraversal(list<int> li[],int s, int arr[]) {
    arr[s] =  1;
    cout << s << " ";

    list<int> ::iterator it;
    for(it = li[s].begin(); it != li[s].end(); it++) {
        if( arr[*it] != 1){

        DepthFirstSearchTraversal(li, *it, arr);
        }
    }
}

// go here and see the concept of dfs first 
// https://www.youtube.com/watch?v=D21-XVw6nYw
int main() {

    int n;
    n = 6;
    int arr[n] = {0};
    list<int> li[n];
    insertAdj(li, 0,1);
    insertAdj(li, 0, 4);
    insertAdj(li, 0, 5);
    insertAdj(li, 1, 2);
    insertAdj(li, 1, 5);
    insertAdj(li, 2, 3);
    insertAdj(li, 2, 5);
    insertAdj(li, 3, 4);
    insertAdj(li, 3, 5);
    insertAdj(li, 4, 5);

    DepthFirstSearchTraversal(li, 2, arr);
    return 0;
}