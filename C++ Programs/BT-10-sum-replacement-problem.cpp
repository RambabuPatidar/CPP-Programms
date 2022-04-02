#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left ;
    node* right ;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumReplacement2(node* &root){
    if( root == NULL){
        return ;
    }
    sumReplacement2(root->left);
    sumReplacement2(root->right);

    if( root->left!= NULL){
        root->data += root->left->data;

    }
    if(root->right!= NULL){
        root->data += root->right->data;
    }

}

void sumReplacement(node* &root){
    
    if( root->left == NULL or root->right == NULL){
        return ;
    }

    sumReplacement(root->left);
    sumReplacement(root->right);
    root->data = root->left->data + root->right->data + root->data;

}

void preOrderPrint(node* root){
    if( root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
    return ;
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right =new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    preOrderPrint(root);cout<<"\n";
    sumReplacement(root);
    preOrderPrint(root);
    cout<<" \n";
    sumReplacement2(root);
    preOrderPrint(root);

    return 0;

}