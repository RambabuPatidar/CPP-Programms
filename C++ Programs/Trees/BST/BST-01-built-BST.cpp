#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *right;

    node(int val ) {
        data =val;
        left =NULL;
        right =NULL;
    }

};

node* insertInBST(node* &root,int val){

    if( root == NULL){
        return new node(val);
    }

   if(root->data > val){
       root->left = insertInBST(root->left, val);
   }
   else{
       root->right = insertInBST(root->right, val);
   }
   return root;
}



void preOrder(node* root){
    if(root== NULL) {
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main(){
   node* root = NULL;
   root = insertInBST(root, 3);
    insertInBST(root, 1);
    insertInBST(root, 4);
    insertInBST(root, 7);
    insertInBST(root, 9);
    insertInBST(root, 2);
    insertInBST(root, 8);
    preOrder(root);
    
    return 0;
}