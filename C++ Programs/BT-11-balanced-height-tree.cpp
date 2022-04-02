#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// this is of time coplexity of O(n^2);

int height(node* root){
    if( root == NULL){
        return 0;
    }

    return max(height(root->left), height(root->right))+1;
}


bool isbalancedTree(node* root){
    if(root == NULL){
        return  true;
    }

    cout<<root->data<<" ";
    if(isbalancedTree(root->left)==false)
        return false;
    
    if(isbalancedTree(root->right) == false)
        return false;
    
    int lHeight = height(root->left);
    int rHeight = height(root->right);

   if(abs(lHeight- rHeight)<=1){
       return true;
   }
   else{
       return false;
   }
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right =  new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    root->right->right->right->right = new node(9);
    root->left->left->right =new node(10);
    if(isbalancedTree(root)){
        cout<<"balanced Tree"<<endl;
    }else{
        cout<<"not balanced Tree"<<endl;
    }
    return 0;

}