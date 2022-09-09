#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isMirror(Node* root1, Node* root2) {
    if( root1 == NULL and root2 == NULL ) {
        return true;
    }

    if(root1 and root2 and root1->data == root2->data ) {
        return isMirror(root1->left , root2->right) and isMirror(root1->right , root2->left);
    }
    return false;
}

bool isMirrorUtil(Node* root) {
    return isMirror(root, root);
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(3);
    root->right = new Node(2);
    root->right->left = new Node(3);

    if(isMirrorUtil(root) ){
        cout << "yes tree are mirror of ech other " << endl;
    }
    else{
        cout << "not they are not mirror" << endl;
    }
    return 0;
}