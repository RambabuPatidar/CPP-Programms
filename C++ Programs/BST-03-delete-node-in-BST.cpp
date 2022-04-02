#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int val) {
        data  = val;
        right = NULL;
        left = NULL;
    }
};

node*  inSuccessor(node* root) {
    node* curr = root;
    while(curr!= NULL and curr->left!= NULL ) {
        curr = curr->left;
    }
    return curr;
}

node* deleteNodeInBST(node* &root , int key) {

    if(root == NULL ) {
        return NULL;
    }

    if( root->data > key ) {
        root->left = deleteNodeInBST(root->left,key);
    }
    else if(root->data < key ) {
       root->right = deleteNodeInBST(root->right, key);
    }
    else { 
        if( root->left == NULL ) {
            node* temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right == NULL ) {
            node* temp = root->left;
            delete(root);
            return temp;
        }
        else{
            node* temp  = inSuccessor(root->right);
            root->data  = temp->data;
            root->right = deleteNodeInBST(root->right, temp->data);
        }
    }
    return root;
}

void preOrder(node* root) {
    if(root == NULL ) {
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}

int main() {

    node* root = new node(5);
    root->right = new node(7);
    root->left = new node(1);
    root->left->right= new node(3);
    root->left->right->left = new node(4);
    root->left->right->right = new node(5);
    preOrder(root);
    cout << endl ;
    root = deleteNodeInBST(root, 3);
    preOrder(root);
    cout << endl;

    return 0;
}