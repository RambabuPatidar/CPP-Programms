#include<iostream>
#include<deque>
using namespace std;

struct Node {
	public:
	int data;
	struct Node* left;
	struct Node* right;

	// constructor 
	Node(int val) {
		data = val;
		left =NULL;
		right = NULL;

	}
};
// correct but not effiecient;
void printCurrentLevel(Node* root, int level, int direction ) {
	if( root == NULL ) {
		return ;
	}

	if(level == 1 ) {
		cout << root->data << " ";
	}
	else if( level >1 and direction%2 ==1) {
		printCurrentLevel(root->left, level-1, direction);
		printCurrentLevel(root->right, level-1, direction);
	}
	else{ 
		printCurrentLevel(root->right, level-1, direction);
		printCurrentLevel(root->left, level-1, direction);

	}
}

int heightOfBST(Node* root) {
	if( root == NULL ) {
		return 0;
	}

	int heightL = heightOfBST(root->left);
	int heightR = heightOfBST(root->right);

	if( heightL > heightR) { 
		return heightL +1;
	}
	
		return heightR +1;
	
}

void zigZagTraversal(Node* root) {

	int height = heightOfBST(root);

	for( int i=1; i<=height; i++ ) {
		printCurrentLevel(root, i, i);
	}
}

void preOrder(Node* root) {

	if( root== NULL ) {
		return;
	}

	cout << root->data << " ";
	// for left subtree
	preOrder(root->left);
	// for right subtree
	preOrder(root->right);

}

int main() {
	struct Node* root = new Node(4);
	root->left = new Node(2);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right = new Node(6);
	root->right->right = new Node(7);

	preOrder(root);
	cout << "\n";
	zigZagTraversal(root);

	return 0;
}