#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* LCA(node *root, int n1, int n2) {

    if( root == NULL ) {
        return NULL;
    }

    if( root->data == n1 || root->data == n2) {
        return root;
    }

    node* LCAleft = LCA(root->left, n1, n2) ;
    node* LCAright = LCA(root->right, n1, n2);

    if( LCAleft && LCAright) {
        return root;
    }

    if( LCAleft != NULL ) {
        return LCAleft;
    }

    return LCAright;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right= new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    //test lowestCommonAncestor code
    node* lcaNode = LCA(root, 6, 7);
    cout<< lcaNode->data <<endl;

    return 0;
}