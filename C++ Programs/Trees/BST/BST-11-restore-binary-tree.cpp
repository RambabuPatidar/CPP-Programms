#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void swap(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void calculatePointer(Node* root, Node** first, Node** last, Node** mid,
                        Node** prev) {
    if( root == NULL ) {
        return ;
    }

    calculatePointer(root->left, first, last, mid, prev);

    if(*prev && root->data < (*prev)->data){
        if(!*first) {
            *first = *prev;
            *last = root;
        }
        else{
            *last = root;
        }
    }
    *prev = root;
    calculatePointer(root->right, first, last, mid, prev);
}

void restoreBST(Node* root) {
    Node* first, *last, *mid, *prev;
    first = NULL;
    last = NULL;
    mid = NULL;
    prev = NULL;

    calculatePointer(root, &first, &last, &mid, &prev);

    if( first && last) {
        swap(&(first->data), &(last->data));
    }
    else if(first && mid) {
        swap(&(first->data), &(mid->data));
    }
}

void inOrder(Node* root) {
    if( root == NULL ) {
        return ;
    }

    inOrder(root->left);

    cout << root->data << " ";

    inOrder(root->right);
}

int main() {

    Node* root = new Node(6);
    root->left = new Node(9);
    root->left->left =new Node(1);
    root->left->right =new Node(4);
    root->right = new Node(3);
    root->right->right = new Node(13);

    inOrder(root);
    cout << "\n";
    cout << root->left << endl; // this lines i added because to know 
    restoreBST(root);   //that we had only swapped the value and not the nodes
    cout << root->left << endl;
    inOrder(root);
    cout << "\n";
    return 0;
}