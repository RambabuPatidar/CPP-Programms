#include<bits/stdc++.h>
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

bool checkCompleteTree(Node* root) {

    if( root == NULL) {
        return true;
    }
   queue<Node* > q;
   q.push(root);

    bool flag = false;
   while( q.empty() == false ) {
       Node* temp = q.front();
       q.pop();
       
        if( temp->left != NULL) {
            if( flag == true) {
                return false;
            }
            q.push(temp->left);
        }
        else {
            flag = true;
        }

        if( temp->right != NULL) {
            if( flag == true) {
                return false;
            }
            q.push(temp->right);
        }
        else{
            flag = true;
        }


   }
   return true;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    if( checkCompleteTree(root)) {
        cout << "complete tree " << endl;
    }
    else {
        cout << "incomplete tree" << endl;
    }
    return 0;
}