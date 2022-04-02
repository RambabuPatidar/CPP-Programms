#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

// this recursive way and do check the iterative way that is very similar to this 
// only few line of code chagnes (video zig zag traversal of bst on apna college);

void zigZagTraversalUtil(Node *root, stack<Node *> currst, stack<Node *> nextst, bool leftToRight)
{
	if (root == NULL)
	{
		return;
	}
	if (leftToRight)
	{
		while (currst.empty() == false)
		{
			Node *temp = currst.top();
			currst.pop();
			cout << temp->data << " ";
			if (temp->left != NULL)
			{
				nextst.push(temp->left);
			}
			if (temp->right != NULL)
			{
				nextst.push(temp->right);
			}
		}
	}
	else
	{
		while (currst.empty() == false)
		{
			Node *temp = currst.top();
			currst.pop();
			cout << temp->data << " ";
			if (temp->right != NULL)
			{
				nextst.push(temp->right);
			}
			if (temp->left != NULL)
			{
				nextst.push(temp->left);
			}
		}
	}

	zigZagTraversalUtil(root, nextst, currst, false);
}

// less lines of code, modification of upper code;

void zigZagTraversalUtil2(Node *root, stack<Node *> currst, stack<Node *> nextst, bool leftToRight)
{
	if (root == NULL)
	{
		return;
	}

	while (currst.empty() == false)
	{
		Node *temp = currst.top();
		currst.pop();
		cout << temp->data << " ";
		if (leftToRight)
		{
			if (temp->left != NULL)
			{
				nextst.push(temp->left);
			}
			if (temp->right != NULL)
			{
				nextst.push(temp->right);
			}
		}
		else
		{
			if (temp->right != NULL)
			{
				nextst.push(temp->right);
			}
			if (temp->left != NULL)
			{
				nextst.push(temp->left);
			}
		}
	}
	zigZagTraversalUtil(root, nextst, currst, false);
}

void zigZagTraversal(Node *root)
{
	bool leftToRight = true;
	stack<Node *> currst, nextst;
	currst.push(root);
	zigZagTraversalUtil2(root, currst, nextst, leftToRight);
}

void preOrder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
	return;
}

int main()
{
	Node *root = new Node(4);
	root->left = new Node(2);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right = new Node(6);
	root->right->left = new Node(5);
	root->right->right = new Node(7);
	
	preOrder(root);
	cout << "\n";
	zigZagTraversal(root);
	return 0;
}