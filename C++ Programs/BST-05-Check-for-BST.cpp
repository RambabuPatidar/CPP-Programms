#include<bits/stdc++.h>
using namespace std;

struct  Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) ;
};

Node :: Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
}

bool CheckForBST(Node* root, Node* min, Node* max) {
    if( root == NULL ) {
        return true;
    }

    if( min != NULL  && root->data < min->data) {
        return false;
    }
    if( max != NULL && root->data > max->data ) {
        return false;
    }
    
    bool LeftValid = CheckForBST(root->left, min , root);
    bool RightValid = CheckForBST(root->right, root, max);
    return LeftValid and RightValid;
}

// some modification in the upper code 
bool CheckForBST2(Node* root, int min, int max) {
   
    if( root == NULL ) {
        return true;
    }

    if( root->data < min or root->data > max ) {
        return false;
    }

    bool leftValid = CheckForBST2(root->left, min, root->data);

    bool rightValid = CheckForBST2(root->right, root->data, max);

    return leftValid and rightValid;
    
}

int main() {
    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(9);
    root->right->left = new Node(5);
    root->right->right = new Node(8);
    if( CheckForBST2(root, INT_MIN, INT_MAX) ) {
        cout << "Balanced Tree" <<  endl;
    }
    else {
        cout << "Not Balanced Tree" << endl;
    }
    if( CheckForBST(root, NULL, NULL) ) {
        cout << "Balanced Tree" <<  endl;
    }
    else {
        cout << "Not Balanced Tree" << endl;
    }

    

    return 0;
}