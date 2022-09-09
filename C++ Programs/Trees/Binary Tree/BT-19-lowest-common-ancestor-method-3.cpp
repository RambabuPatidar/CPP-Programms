#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

   
};

Node* newNode(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
//recursive way 
int lca(Node* root, int a, int b) {
    if( root == NULL ) {
        return -1;
    }
    if( a <= root->data and b >= root->data ) {
        return root->data;
    }
    if( a <= root-> data and b <= root->data ) {
        return lca(root->left, a, b);
    }
    return lca(root->right, a, b);

}

// iterative way 
int lcaIterative(Node* root, int a, int b) {
    stack<Node*> st;
    st.push(root);

    while( !st.empty()) {
        Node* temp = st.top() ;
        st.pop();
        if( temp->data >= a and temp->data <= b) {
            return temp->data ;
        
        }
        if( temp->left!= NULL ) {
            st.push(temp->left);

        }
        if( temp->right != NULL ) {
            st.push(temp->right);
        }
    }
    return -1;
}

void preOrder(Node* root) {
    if( root == NULL ) {
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main() {

    Node* root = newNode(4);
    root->left = newNode(2);
    root->left->left = newNode(1);
    root->left->right= newNode(3);
    root->right = newNode(6);
    root->right->right = newNode(7);

    preOrder(root);
    cout << endl;
    cout << lca(root, 1,3) << endl;
    cout << lcaIterative(root, 1,3) << endl;
    return 0;
}