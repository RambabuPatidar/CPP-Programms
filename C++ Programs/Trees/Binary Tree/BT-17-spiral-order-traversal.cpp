#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* left;
    node* right;    
    int data;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
// mymehtod 
// see the modified method
void spiralTraversal(node* root){
    deque<node*> dq;
    int i = 0;
    dq.push_back(root);
    while(!dq.empty()){
        if(i%2 == 0){
            int n = pow(2,i);
            for(int i=0;i<n;i++){
                node* newNode = dq.front();
                dq.pop_front();
                cout<<newNode->data<<" ";
                if( newNode->right!= NULL){
                    dq.push_back(newNode->right);
                }
                if( newNode->left!= NULL){
                    dq.push_back(newNode->left);
                }
            }
        }
        else{
            int n = pow(2,i);
            for(int i=0;i<n;i++){
                node* newNode = dq.back();
                dq.pop_back();
                cout<<newNode->data<<" ";
                if(newNode->right!= NULL){
                    dq.push_front(newNode->left);
                }
                if(newNode->left!= NULL){
                    dq.push_front(newNode->right);
                }
            }
        }
        i++;
    }
    
}


void zigZagTraversal( node* root) {
	deque<node*> dq;
	dq.push_back(root);
	while( dq.empty() == false) {
		
		int n = dq.size();
		for( int i=1; i<=n; i++) {
			node* temp = dq.front();
			dq.pop_front();
			cout << temp->data << " ";

			if( temp->left != NULL ) {
				dq.push_back(temp->left);
			}
			if( temp->right != NULL ) {
				dq.push_back(temp->right);
			}

		}

		n = dq.size();
		for( int i=1; i<=n; i++ ) {
			node* temp = dq.back();
			dq.pop_back();
			cout << temp->data << " ";
			
			if( temp->right != NULL ) {
				dq.push_front(temp->right);
			}
			if( temp->left != NULL ) {
				dq.push_front(temp->left);
			}
			
		}
	}
}

int main(  ){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right= new node(7);
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    root->left->right->left = new node(10);
    root->left->right->right = new node(11);
    root->right->left->left = new node(12);
    root->right->left->right = new node(13);
    root->right->right->left = new node(14);
    root->right->right->right = new node(15);
    spiralTraversal(root);
    cout << endl;
    zigZagTraversal(root);
    return 0;
}