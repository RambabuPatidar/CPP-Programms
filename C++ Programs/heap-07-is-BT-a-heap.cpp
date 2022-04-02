#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) :data(val){
        left = NULL;
        right = NULL;
    }
};

bool isCompleteTree(Node* root) {
    if( root == NULL ){
        return true;
    }

    queue<Node* > q;
    q.push(root);

    bool flag = false;
    while( q.empty() == false) {
        Node* temp = q.front();
        q.pop();

        if( temp == NULL ){

            flag = true;
        }
        else{

            if( flag == true) {
                return false;
            }

            q.push(temp->left);
            q.push(temp->right);
        }
    }

    return true;
}

bool greaterNode(Node* root) {
    if( root->left == NULL and root->right == NULL ) {
        return true;
    }
    if( root->right == NULL ){
        return root->data >= root->left->data;

    }
    else {
        
        if( root->data >= root->left->data && root->data >= root->right->data ) {
            return greaterNode(root->left) && greaterNode(root->right);
        }
        else{
            return false;
        }
    }

}

bool isHeap(Node* root) {

    // bool ans1 = isCompleteTree(root);
    // bool ans2 = greaterNode(root);

    return isCompleteTree(root) and greaterNode(root);
    // return ans1 and ans2;
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(6);
    // root->right->left = new Node(6);

    if( isHeap(root)) {
        cout << "yes it is a heap" << endl;
    }
    else{
        cout << "no it is not heap " << endl;
    }
    return 0;
}