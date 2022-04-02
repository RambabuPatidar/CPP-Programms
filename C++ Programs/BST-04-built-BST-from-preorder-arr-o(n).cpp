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

Node* BuiltTree(int preOrder[], int* preOrderidx, int key, int min, int max, int n) {
    if(*preOrderidx >= n) {
        return NULL;
    }
    Node* root = NULL;
    if( key > min && key < max) {
        root = new Node(key);
        *preOrderidx = *preOrderidx + 1; 
        if(*preOrderidx < n) {
            root->left = BuiltTree(preOrder, preOrderidx, preOrder[*preOrderidx], min, key, n);
        }
        if(*preOrderidx < n) {
            root->right = BuiltTree(preOrder, preOrderidx, preOrder[*preOrderidx], key, max, n);
        }

    }

    return root;
}

void printPreOrder(Node* root) {
    if( root == NULL ) {
        return ;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
    return ;
}

int main() {

    int preOrder[6] = {7, 5, 4, 6, 8, 9};
    int n = sizeof(preOrder)/ sizeof(preOrder[0]);
    int preOrderidx = 0;

    Node* root = BuiltTree(preOrder, &preOrderidx, preOrder[preOrderidx], INT_MIN, INT_MAX, n);

    printPreOrder(root);
    return 0;
}