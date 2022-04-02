#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data ;
    node* right;
    node* left;

    node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

void levelOrder(node* root){
    if( root == NULL){
        return ;
    }
    queue<node*> q; 
    q.push(root);

    while(!q.empty()){
        
        int n = q.size();
        for( int i=0;i<n;i++){
            node* Node = q.front();
             q.pop();
            cout<<Node->data<<" ";
            if( root->left!= NULL){
                q.push(Node->left);

            }
            if( root->right != NULL){
                q.push(Node->right);
            }
        }
    }
}

void postOrder(node* root){
    if( root== NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    return ;
}

int main(){

    node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

     root->left->left = new node(4);
     root->left->right = new node(5);

     root->right->left = new node(6);
     root->right->right = new node(7);

    //  postOrder(root);
     levelOrder(root);
    return 0;
} 