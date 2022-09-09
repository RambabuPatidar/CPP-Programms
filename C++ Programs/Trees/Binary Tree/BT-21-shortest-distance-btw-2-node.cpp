#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};
// my method of shortest distance between two nodes 
bool getPath(node* root,int n, vector<int> &path){
    if( root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == n){
        return true;
    }

    if(getPath(root->left, n, path) || getPath(root->right, n, path)){
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(node* root, int n1, int n2){
    vector<int> path1, path2;
    
    if(!getPath(root, n1,path1) || !getPath(root, n2, path2)){
        return -1;
    }
    int minimum = min(path1.size(), path2.size());
    int i;
    for( i=0;i<minimum;i++){
        if(path1[i] != path2[i]){
            break;
        }
    }
    // i= i-1;
    int count = 0;
    for( int j = i;j<path1.size(); j++){
        count++;
    }
    for( int j=i;j<path2.size(); j++){
        count++;
    }
    return count;
   
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left= new node(4);
    root->left->right= new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<LCA(root, 6,7);
    return 0;
}