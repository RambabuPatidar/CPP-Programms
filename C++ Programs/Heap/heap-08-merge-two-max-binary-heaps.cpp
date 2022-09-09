#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j) {
    int temp = arr[i] ;
    arr[i] = arr[j];
    arr[j] = temp;
    return ;
}

void heapify(vector<int> &arr, int i) {
    if( i > 0) {
        int parent = (i-1)/2;

        if( arr[i] > arr[parent]) {
            swap(arr, i, parent);

            heapify(arr, parent);
        }
    }
    return ;
}

vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {

    if( n > m) {
        for(int i= 0; i< m ; i++) {
            a.push_back(b[i]);
            n++;
            heapify(a, n-1);
        }
        return a;
    }

    for (int i = 0; i < n; i++)
    {
        b.push_back(a[i]);
        m++;
        heapify(b, m - 1);
    }
    return b;
}

int main() {

    // merge two maximum heaps 

    vector<int> a;
    vector<int> b;

    a = {10, 5, 6, 2};
    b = {12, 7, 9};

    vector<int > v =  mergeHeaps(a, b, a.size(), b.size());

    for(int i=0; i< v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}