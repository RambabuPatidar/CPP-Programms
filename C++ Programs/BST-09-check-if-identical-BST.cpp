#include<iostream>
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

bool isIdentical(Node* root1, Node* root2) {
	if( root1 == NULL and  root2 == NULL ) {
		return true;
	}

	if( root1 == NULL or root2 == NULL ) {
		return false;
	}
	if(root1->data == root2->data ) {
		if( isIdentical(root1->left, root2->left) and 
			isIdentical(root1->right, root2->right)) {
			return true;
		}
	}
	return false;

}

void preOrder(Node* root) {

	if( root != NULL ) {
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
	return ;
}

int main() {

	Node* root = new Node(4);
	root->left = new Node(2);
	root->right = new Node(6);
	root->left->left = new Node(1);
	root->right->right = new Node(7);
	root->left->right = new Node(3);

	Node* root2 = new Node(4);
	root2->left = new Node(2);
	root2->right = new Node(6);
	root2->left->left = new Node(1);
	root2->right->right = new Node(7);
	root2->left->right = new Node(3);

	
	preOrder(root);
	cout << endl;
	preOrder(root2);
	cout << endl;
	if( isIdentical(root, root2)) {
		cout << "identical" << endl;
	}
	else {
		cout << "Not identical" << endl;
	}
	return 0;
}