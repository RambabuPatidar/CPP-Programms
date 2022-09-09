#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *lcaleft = LCA(root->left, n1, n2);
    node *lcaright = LCA(root->right, n1, n2);

    if (lcaleft and lcaright)
    {
        return root;
    }

    if (lcaleft != NULL)
    {
        return lcaleft;
    }

    return lcaright;
}

int findDist(node *root, int k, int dis)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->data == k)
    {
        return dis;
    }
    int left = findDist(root->left, k, dis + 1);
    if (left != -1)
    {
        return left;
    }

    return findDist(root->right, k, dis + 1);
}

int shortestDist(node *root, int n1, int n2)
{
    node *lca = LCA(root, n1, n2);
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);

    return d1 + d2;
}

int main()
{
    node *root = new node(1);

    root->right = new node(3);
    root->left = new node(2);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << shortestDist(root, 4, 7) << endl;
    return 0;
}