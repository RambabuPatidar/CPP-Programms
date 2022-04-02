#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data ;
    node* left;
    node* right;

    node(int val){
        data = val ;
        left = NULL;
        right = NULL;
    }
};
// optimized methode 
int calcDiameter2(node* root , int * height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    
    int lh = 0;int rh = 0;

    int lDiameter =  calcDiameter2(root->left, &lh);
    int rDiameter = calcDiameter2(root->right , &rh);

    int currDiameter = lh +rh +1;
    *height = max(lh,rh) +1;

    return max(currDiameter, max(lDiameter, rDiameter));


}

/* time complexity for height function will be O(n);
and the time complexity for the calcDiameter() functio will 
be O(n^2);
so the total time complexity will be O(n^2)
*/

int height(node* root){
    if( root == NULL){
        return 0;
    }
    
    int rheight = height(root->right);
    int lheight= height(root->left);
    return max(rheight, lheight) +1;

}

int  calcDiameter1(node* root){
    if( root== NULL){
        return -1;
    }

    int lheight = height(root->left );
    int rheight = height(root->right);
    int currDiameter = lheight + rheight +1;

    int lDiameter = calcDiameter1(root->left);
    int rDiameter = calcDiameter1(root->right);
    

    return max(currDiameter, max(lDiameter , rDiameter));

}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->left = new node(7);
    cout<<calcDiameter1(root);
    cout<<"\n";
    // optimized methode
    int height = 0;
    cout<<calcDiameter2(root, &height);
    return 0;
}