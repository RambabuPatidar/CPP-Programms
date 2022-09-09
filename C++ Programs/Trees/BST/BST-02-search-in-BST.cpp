#include<iostream> 
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right ;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

node* insertBST(node* &root, int val ){
 
    if( root == NULL) {
        return new node(val);
    }

    if( root->data  > val){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }

    return root;
}
// return nodeof the key
node* searchBST2(node* root , int key){

    if(root == NULL) {
        return NULL;
    }

    if( root->data == key){
        return root;
    }
    
    if(root->data > key){
       return  searchBST2(root->left, key);
    }
    
    return  searchBST2(root->right, key);
    

    
}

// returns yes no
bool searchBST(node* root , int key){

    if(root == NULL) {
        return false;
    }

    if( root->data == key){
        return true;
    }
    if(root->data > key){
       return  searchBST(root->left, key);
    }
    
       return  searchBST(root->right, key);
    

    // return false;
}

void preOrder(node* root){
    if( root == NULL) {
        return ;
    }
    cout<<root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main(){

    node* root = NULL;
    root = insertBST(root, 3);

    insertBST(root, 2);
    insertBST(root,5);
    insertBST(root, 4);
    insertBST(root, 7);
    insertBST(root, 1);
    insertBST(root, 0);
    preOrder(root);
    cout<<endl;
    if( searchBST2(root, 8) == NULL){
        cout<< "not present " <<endl;

    }
    else{
        cout<< "present" <<endl;
    }
    return 0;
}