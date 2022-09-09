#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node( int val){
        data = val;
        left = NULL;
        right =NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
    for( int i=start;i<=end;i++){
        if( inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

node* builtTree(int postorder[], int inorder[] , int start ,int end){
    static int idx = end;
    if( start > end){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    struct node* root = new node(curr);
    int pos = search(inorder , start , end , curr);
    if( start == end){
        return root;
    }
    root->right = builtTree(postorder, inorder, pos+1, end);
    root->left = builtTree(postorder, inorder, start, pos-1);

    return root;

}

void printTree( struct node* root){
    if( root == NULL){
        return ;
    }
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
    return ;
}

int main( ){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    struct node* root = builtTree(postorder, inorder, 0, 4);
    printTree(root);
    return 0;
}