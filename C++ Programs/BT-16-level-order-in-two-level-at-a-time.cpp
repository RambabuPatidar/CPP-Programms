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
        right = NULL;
        left = NULL;
    }
};
// two times left to right and two times right to left;

void levelOrderinTwo(node* root){
    deque<node*> dq;
    dq.push_back(root);
    int i=  0;
    while(!dq.empty()){
        
        int count =2;
        while(count--){
            int n = pow(2,i);
            for(int i=0;i<n;i++){
                node* newNode= dq.front();
                dq.pop_front();
                cout<<newNode->data<<" ";
                if( newNode->left!= NULL){
                    dq.push_back(newNode->left);
                }
                if( newNode->right!= NULL){
                    dq.push_back(newNode->right);
                }

            }  
            i++;  
        }
        count = 2;
        while( count--){
            int n= pow(2,i);
            for(int i=0;i<n;i++){
                node* newNode = dq.back();
                dq.pop_back();
                cout<<newNode->data<<" ";
                if( newNode->right!= NULL){
                    dq.push_front(newNode->right);
                }
                if( newNode->left!= NULL){
                    dq.push_front(newNode->left);
                }
            }
            i++;
        }

        
    }
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
    levelOrderinTwo(root);
    return 0;
}

