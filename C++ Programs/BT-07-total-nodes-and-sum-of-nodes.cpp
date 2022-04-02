#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data ;
    node* left ;
    node* right;

    node(int val){
        data=val;
        left = NULL;
        right = NULL;

    }
};

int NumberOfNodes1(node* root){
    static int ans =0;
    if( root == NULL){
        return 0;
    }
    else{
        int leftNodes = NumberOfNodes1(root->left);
        int rightNodes = NumberOfNodes1(root->right);
        ans++;
    }
    return ans;
}

int NumberOfNodes2(node* root){
    if( root== NULL){
        return 0;
    }
    return NumberOfNodes2(root->left) + NumberOfNodes2(root->right) +1;
}
int sumOfBT1(node* root){
    static int ans=0;
    if( root== NULL){
        return 0;
    }

    sumOfBT1(root->left);
    sumOfBT1(root->right);
    ans += root->data;

    return ans;
   
}

int sumOfBT2(node* root){
    if( root == NULL){
        return 0;
    }
    return sumOfBT2(root->left)+ sumOfBT2(root->right)+ root->data;
}


int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->left->left->left = new node( 8);
    root->left->left->right = new node(9);
    root->left->right->left = new node(10);
    root->left->right->right= new node(11);
    root->right->left->left = new node( 12);
    root->right->left->right = new node(13);
    root->right->right->left = new node(14);
    root->right->right->right = new node(15);

cout<<NumberOfNodes1(root)<<"\n";
cout<<NumberOfNodes2(root)<<"\n";
cout<<sumOfBT1(root)<<"\n";
cout<<sumOfBT2(root)<<"\n";
    return 0;
}