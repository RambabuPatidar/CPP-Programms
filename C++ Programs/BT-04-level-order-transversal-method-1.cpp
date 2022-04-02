#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node*  right ;

    node(int val){
        data = val ;
        left = NULL;
        right = NULL;

    }
};

int height(struct node* root){
    if(root == NULL){
        return 0;
    }
    else{
        int lheight = height(root->left);
        int rheight = height(root->right);
        if( lheight> rheight){
            return lheight +1 ;
        }
        else{
            return rheight+1;
        }
    }
}

void printCurrentLevel(struct node* root, int level){
    if( root ==NULL){
        return ;
    }
    if( level ==1){
        cout<<root->data<<" ";
        return ;
    }
    else if(level>1){
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}

void printLevelOrder(struct node* root){
    for( int i=1;i<=height(root);i++){
        printCurrentLevel(root, i);
    }
}

int main(){
    struct node* root = NULL;
    root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    printLevelOrder(root);
    return 0;
}