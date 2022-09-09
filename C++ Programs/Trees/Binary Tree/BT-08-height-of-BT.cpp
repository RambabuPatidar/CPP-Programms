#include <iostream>
using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;

    tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int heightOfBT(tree* root){
    if( root == NULL){
        return 0;
    }
    return (heightOfBT(root->right)> heightOfBT(root->left))?heightOfBT(root->right)+1:heightOfBT(root->left)+1;

}

int heightOfBT2(tree* root){
    if(root== NULL){
        return 0;
    }
    int lheight=  heightOfBT2(root->left);
    int rheight = heightOfBT2(root->right);
    return max(lheight , rheight) +1;
}


int main()
{

    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);

    root->left->left = new tree(4);
    root->left->right = new tree(5);

    root->right->left = new tree(6);
    root->right->right = new tree(7);

    cout<<heightOfBT(root);

cout<<"\n";
    cout<<heightOfBT2(root);
    return 0;
}