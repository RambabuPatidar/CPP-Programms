#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* left ;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};

void preOrder(node* root, int pos){
    stack<node*> st;
    int count =1;
    st.push(root);
    while(!st.empty()){
        node* Node = st.top();
        st.pop();
        if( count == pos){
            cout<<Node->data<<endl;
            break;
        }

        // cout<<Node->data<<" ";
        if( Node->right!= NULL){
            st.push(Node->right);
        }
        if( Node->left!= NULL){
            st.push(Node->left);
        }
        count++;
    }
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left =new node(6);
    root->right->right = new node(7);

    preOrder(root, 7);
    return 0;

}