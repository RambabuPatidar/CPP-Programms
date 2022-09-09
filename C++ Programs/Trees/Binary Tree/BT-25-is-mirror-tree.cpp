#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data=  val;
        left = NULL;
        right= NULL;
    }
};

// this one is a brute force approch

void inOrder(Node* root, vector<int> &v){
    if( root == NULL) {
        return ;
    }
    inOrder(root->left, v);
    v.push_back(root->data);
    inOrder(root->right, v);
    return ;
}

bool isMirror(Node* root) {
    vector<int> v;
    inOrder(root, v);
    int n = v.size();
    cout << n << endl;
    int mid = 0;
    mid = (n/2);
    for( int i=0; i<=mid; i++ ) {
        if( v[i] != v[n-i-1]) {
            return false;
        }
    }

    return true;
}

int main() {
Node* root = new Node(1);
root->left = new Node(2);
root->left->right = new Node(3);
// root->left->right->right = new Node(4);
root->right = new Node(2);
root->right->right = new Node(3);
// root->right->left = new Node(3);
// root->right->left->left = new Node(4);

    if( isMirror(root)) {
        cout << "yes mirror" << endl;
    }
    else{
        cout << "no not Mirror" << endl;
    }
    return 0;
}