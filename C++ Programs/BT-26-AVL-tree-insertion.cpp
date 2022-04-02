#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left  = NULL;
        right = NULL;
    }
};

// to understand the concept go and watch video of "back to back SWE " on youtube very good explanation 

int height(Node* root) {
    if( root == NULL ) {
        return -1;
    }
    if( root->left == NULL and root->right == NULL) {
        return 0;
    }
    return max(height(root->left), height(root->right)) +1;
}

int getBalance(Node* root) {

    int ans = height(root->left) - height(root->right);
    return ans;
}


Node* rightRotate(Node* x) {
    Node* y = x->left;
    Node* T2 = y->right;

    y->right = x;
    x->left = T2;
    return y;
    
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;
    return y;
}

Node* builtAVL(Node* root, int key ) {
    if( root == NULL ) {
        return new Node(key);
    }
    if( key < root->data ) {
        root->left = builtAVL(root->left, key);
    }
    else if(key > root->data ) {
        root->right = builtAVL(root->right, key);
    }
    else {
        return root;
    }

    int balance = getBalance(root);
    cout << balance << endl;

    if( balance > 1 && key < root->left->data){
        return rightRotate(root);
    }
    if( balance > 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if( balance < -1 && key > root->right->data) {
        return leftRotate(root);
    }
    if( balance < -1 && key < root->right->data ) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void inOrder(Node* root) {
    if( root == NULL ) {
        return ;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root) {
    if( root == NULL ) {
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main() {
    Node* root = NULL;
    root = builtAVL(root, 10);
    root = builtAVL(root, 20);
    root = builtAVL(root, 30);
    root = builtAVL(root, 40);
    root = builtAVL(root, 50);
    root = builtAVL(root, 25);
    // root = builtAVL(root, 9);
    // root= builtAVL(root, 8);
    // root= builtAVL(root, 7);
    // root= builtAVL(root, 6);
    // root= builtAVL(root, 5);

    inOrder(root);
    cout << endl;
    preOrder(root);
    return 0;
}