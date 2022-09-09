#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data  =val;
        left = NULL;
        right = NULL;
        
    }
};

void rightViewOfBT(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int value = 0;
    while(!q.empty()){
        node* Node = q.front();
        q.pop();
        
        if( Node != NULL){
            value  = Node->data;
            // cout<<Node->data<<" ";
            if( Node->left != NULL){
                q.push(Node->left);
            }
            if( Node->right != NULL){
                q.push(Node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            cout<<value<<" ";
        }
        else{
            cout<<value<<" ";
        }
    }
}
int main(){
    node* root  = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->right = new node(5);
    root->left->left = new node(4);

    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    root->right->right->right->right = new node(9);
    root->right->right->left = new node(123);

    rightViewOfBT(root);
    
    return 0;
}