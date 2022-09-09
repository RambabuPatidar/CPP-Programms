#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};
vector<int> path;
bool printAncestor(node* root,int key){
    if( root == NULL){
        return false;
    }
    if( root->data == key ){
        return true;
    }
    if( printAncestor(root->left, key) || printAncestor(root->right, key)){
        path.push_back(root->data);
        return true;
    }
         return false;
    
}   


int main(){

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->right= new node(9);
    root->right->right->right = new node(10);
    int key;
    
    cout<<"enter the value of key"<<endl;
    cin>>key;
 printAncestor(root, key );

    for( int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    return 0;
}
