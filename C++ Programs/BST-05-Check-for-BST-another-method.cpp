#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// iterative way 
// this has time complexity of o(n) and space coplexity of (n);
bool checkForBST(Node* root) {
    stack<Node* > st;
    Node* curr = root;
    vector<int> v;
    while( st.empty() == false  || curr!= NULL) {
        
        while( curr!= NULL ) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        v.push_back(curr->data);
        curr = curr->right;      
    }

     for( int i =0; i<v.size()-1; i++ ) {
            if(v[i] > v[i+1]) {
               return false;
                break;

            }
        }
    return true;
}
//iterative way 
// modified space complexity for above code;
bool checkForBST2(Node* root) {
    stack<Node* > st;
    Node* curr = root;
    int preValue = -1;
    while( st.empty() == false  || curr!= NULL) {
        
        while( curr!= NULL ) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        if( preValue > curr->data ) {
            return false;
        }
        st.pop();
        preValue = curr->data;
        curr = curr->right;      
    }

    
    return true;
}

// recursive way and space complexity n;

void checkForBSTUtil(Node* root, vector<int> &v ) {
    if(root == NULL ) {
        return;
    }

    checkForBSTUtil(root->left, v);
    v.push_back(root->data);
    checkForBSTUtil(root->right, v);
    return ;
}

bool checkForBST3(Node* root) { 
    vector<int> v;
    checkForBSTUtil(root, v);
    for( int i=0; i<v.size()-1; i++ ) {
        if( v[i] > v[i+1]) {
            return false;
        }
    }
    return true;
}


int main( ) {
    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    // root->right->right = new Node(8);

    if( checkForBST2(root )) {
        cout << "valid BST" << endl;
    }
    else {
        cout << "invalid BST" << endl;
    }

    return 0;
}