#include<iostream>
using namespace std;

template<class T> 
class Node{
    public:
    T data;
    Node<T> *left;
    Node<T> *right;

    Node(T val);
};

template<class T>
Node<T> :: Node(T val) {
    data = val;
    left = NULL;
    right = NULL;
}

template<class T, class T2>
Node<T> *builtBST(Node<T> *root, T2 val) {
    if( root == NULL) {
        return new Node<T>(val);
    }

    if( root->data > val ) {
        
        root->left = builtBST(root->left, val);

    }
    else if( root->data < val) {
        
        root->right = builtBST(root->right, val);
    }
    return root;
} 

template < class T>
void preOrder(Node<T> *root) {
    if( root == NULL) {
        return ;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main () {

    Node<char> *root = NULL;
    root = builtBST(root, 'c');
    root = builtBST(root, 'f');
    root = builtBST(root, 'a');
    root = builtBST(root, 'b');
    root = builtBST(root, 'e');
    root = builtBST(root, 'd');

    preOrder(root);
    
    return 0;
}


/*  use this code and work with files simontaneously 
that a great way to merge thing we learned 
before using it make file TestCase throught ofstream and then add your 
test case for building tree <---
int main () {

    Node<int> *root = NULL;
   
   
    int n;
    ifstream fin;
    fin.open("TestCase");
    fin >> n;
    int arr[n];
    for(int i=0; i<n ;i++) {
        fin >> arr[i];
    }
    fin.close();
    for(int i=0; i<n; i++) {
        root = builtBST(root, arr[i]);
    }
    preOrder(root);
    
    return 0;
}
*/