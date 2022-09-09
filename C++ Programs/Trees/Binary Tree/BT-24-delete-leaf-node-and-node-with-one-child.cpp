#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;


    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

};

// deleteLeaf function will only able to delete the leaf node in a tree
node* deleteLeaf(node* &root, int key) {
    
    if( root == NULL ) {
        return NULL;
    }

    if( root->data == key ) {
        delete(root);
        return NULL;

    }

    root->left = deleteLeaf(root->left, key);
    root->right = deleteLeaf(root->right, key);
    return root;
}

// deleteNodeHavingOneChild() function can delete the leaf node as well as node with one childs
node* deleteNodeHavingOneChild(node* &root, int key) {
    if( root == NULL ) {
        return NULL;
    }

    if( root->data == key) {
        /*
        this part of the code if have used in the deletenode from a bst code 
        and this can handle the both cases that if the node to be deleted is 
        having zero child and one child 
        */
        if(root->left == NULL ) {
            node* temp = root->right;
            delete(root);
            return temp;

        }
        else if( root->right == NULL ) {
            node* temp = root->left;
            delete(root);
            return temp;
        }
    }

    root->left = deleteNodeHavingOneChild(root->left, key);
    root->right = deleteNodeHavingOneChild(root->right, key);
    return root;
    
}

void preOrder(node* root) {
    if( root == NULL ) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    // root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);

    preOrder(root);
    cout << "\n";
    root = deleteNodeHavingOneChild(root, 5);
    preOrder(root);
    cout << "\n";
    return 0;
}