#include<iostream>
#include<queue>
using namespace std;
// this program is for 
//binary tree traversal 
// sum at kth level also 
class node{
    public:
    int data ;
    node* right;
    node* left;

    node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

int levelOrderTraversal(node* root, int k){
    int count= 0;
    int ans = 0;
    if( root == NULL){
        cout<<"no element in the binary tree"<<endl;
        return -1 ;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    if( k == 0){
        return root->data;

    }

    while( !q.empty()){
        node* newNode = q.front();
        q.pop();
        if( newNode != NULL){
            //cout<<newNode->data<<" ";
            if(count == k){
                ans += newNode->data;
            }
            if(newNode->left!= NULL){
                q.push(newNode->left);

            }
            if(newNode->right !=NULL){
                q.push(newNode->right);

            }
        }
        else if(!q.empty()){
            count ++;
            q.push(NULL);
        }
    }

    return ans;
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<levelOrderTraversal(root, 2);
    return 0;
}