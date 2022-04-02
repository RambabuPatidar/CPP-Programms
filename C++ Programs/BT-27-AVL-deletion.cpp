#include<iostream>
using namespace std;

class Node{
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

// there is something different in delete function that which rotation we have to apply 
// but whatever testcases i ran all worked fine but do check the condition that are in 
// gfg code and all other online website codes;

int height(Node* root) {
    if( root == NULL ) {
        return -1;
    }
    if(root->left == NULL and root->right == NULL) {
        return 0;
    }
    return max(height(root->left), height(root->right)) +1;

}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;
    return y;
}

Node* rightRotate(Node* x) {
    Node* y = x->left;
    Node* T2 = y->right;

    y->right = x;
    x->left = T2;
    return y;
}

int getBalance(Node* root) {

    int ans = height(root->left) - height(root->right);

    return ans;
}

Node* insertInAVL(Node* root, int key) {
    if( root == NULL) {
        return new Node(key);

    }
    if( root->data > key ) {
        root->left = insertInAVL(root->left, key);
    }
    else if(root->data < key) {
        root->right = insertInAVL(root->right, key);
    }
    else {
        return root;
    }

    int balance = getBalance(root);

    if( balance > 1 and key < root->left->data ) {
        return rightRotate(root);
    }
    if( balance > 1 and key > root->left->data ) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if( balance < -1 and key > root->right->data ) {
        return leftRotate(root);
    }
    if( balance < -1 and key < root->right->data ) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

Node* inOrderSuccessor(Node* root ) {
    Node* curr = root;
    while(curr and  curr->left!= NULL ) {
        curr = curr->left;
    }
    return curr;
}

Node* deleteInAVL(Node* root, int key) {
    if( root == NULL ) {
        return NULL;
    }
    else if(root->data > key ) { 
        root->left = deleteInAVL(root->left, key) ;
    }
    else if( root->data < key) {
        root->right = deleteInAVL(root->right, key);
    }
    else{
        if( root->left == NULL) {
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        else if( root->right == NULL ) {
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        else{
            Node* temp = inOrderSuccessor(root->right);
            root->data = temp->data;
            root->right = deleteInAVL(root->right, temp->data);
        }
    }

    if( root == NULL ) {
        return root;
    }

    int balance = getBalance(root);
    
    if( balance > 1 and key < root->left->data ) {
        return rightRotate(root);
    }
    if( balance > 1 and key > root->left->data ) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if( balance < -1 and key > root->right->data ) {
        return leftRotate(root);
    }
    if( balance < -1 and key < root->right->data ) {
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
    return;
}

void preOrder(Node* root){
    if( root == NULL ) {
        return ;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){

    Node* root = NULL;
    root = insertInAVL(root, 9);
    root = insertInAVL(root, 5);
    root = insertInAVL(root, 10);
    root = insertInAVL(root, 0);
    root = insertInAVL(root, 6);
    root = insertInAVL(root, 11);
    root = insertInAVL(root, -1);
    root = insertInAVL(root, 1);
    root = insertInAVL(root, 2);

    inOrder(root);
    cout << endl;
    preOrder(root);
    

   root =  deleteInAVL(root, 10);
    cout <<endl;
    inOrder(root);
    cout << endl;
    preOrder(root);

    return 0;
}