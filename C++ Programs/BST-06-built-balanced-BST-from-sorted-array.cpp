#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val);
};

node:: node(int val) {
    data = val;
    left = NULL ;
    right = NULL;
}

void preOrder(node* root) {
    if( root == NULL ) {
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

node* builtTree(int arr[], int n, int start, int end) {
    
    if( start > end ) {
        return NULL;
    }

    int mid = ( start+end ) / 2;
    node* root = new node(arr[mid]);

    root->left = builtTree(arr, n, start, mid-1);
    root->right = builtTree(arr, n, mid+1, end);

    return root;
}

int main() {

    int arr[]  = {1, 2, 3, 4, 5, 6};
    node* root = builtTree(arr, 6, 0, 5);
    preOrder(root);
    cout << "\n";


    return 0;
}