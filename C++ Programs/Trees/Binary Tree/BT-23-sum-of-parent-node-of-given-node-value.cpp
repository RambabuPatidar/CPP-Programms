#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left, *right;

    node(int val) {
        data = val;
        left = right= NULL;
    }
};

// my methode

void sumParentWithX(node* root, int x, int &sum) {
    if( root->left == NULL or root->right== NULL ) {
        return ;
    }

    if( root->left->data == x or root->right->data == x) {
        cout << root->data << " ";
        sum+= root->data;
    }

    // this part of code when used giving the repeated value also but we don't want that
    // if( root->right->data == x) {
    //     cout << root->data << " ";
    //    sum+= root->data;
    // }

      sumParentWithX(root->left, x, sum);
      sumParentWithX(root->right,x, sum);
  
    
}

// another methode also has same code the 
// difference is that we can make one more uttil function and 
//fronm there we can pass the sum value and 

int main(){ 

    node* root =  new node(4);
    root->left = new node(2);
    root->right = new node(2);
    root->left->left = new node(7);
    root->left->right = new node(2);
    root->right->left = new node(2);
    root->right->right = new node(2);
    int sum = 0;
    sumParentWithX(root,2,sum);
    cout << sum << endl;
    return 0;
}