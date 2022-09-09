#include<iostream> 
using namespace std;
#include<stack>
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left  = NULL;
        right = NULL;
    }
};

void inOrderIterative(node* root){
    stack<node* > st;
    node* curr =root;
    while(st.empty() == false or curr != NULL){
        while( curr!= NULL){
            st.push(curr);
            curr=  curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    inOrderIterative(root);
     
    return 0;
}