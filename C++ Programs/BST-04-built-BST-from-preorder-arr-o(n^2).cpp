#include<bits/stdc++.h>
using namespace std;

struct Node {

    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printPreOrder(Node* root) {
    if( root == NULL ) {
        return ;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
    return ;
}

Node* createNode(Node* &root, int key) {
    if( root == NULL ){
        return new Node(key);
    }

    if( root->data > key ) {
        root->left = createNode(root->left, key) ;
    }
    else {
        root->right = createNode(root->right, key);
    }
    return root;
}

Node* BuiltTree2(int preOrder[],int n) {
    Node* root = NULL;
    for(int i=0; i<n; i++ ) {
        root =  createNode(root, preOrder[i]);
    }
    return root;
}

int main() {

    int preOrder[6] = {7, 5, 4, 6, 8, 9};
    int n = sizeof(preOrder)/ sizeof(preOrder[0]);

    Node* root = BuiltTree2(preOrder,n);
    printPreOrder(root);
    return 0;
}