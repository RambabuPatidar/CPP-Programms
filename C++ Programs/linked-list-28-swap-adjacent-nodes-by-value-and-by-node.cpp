#include<iostream>
using namespace std;

class Node {
	public:

	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = NULL;

	}
};

void swapByNode(Node* &head, int pos) {
	Node* temp = head;
	int count =1;
	Node* preNode = head;
	while( count != pos) {
		preNode = temp;
		temp = temp->next;
		count++;
	}
	Node* storePreNodeNext = preNode->next;
	preNode->next =temp->next;
	Node* storeTempNext2 = temp->next->next;
	temp->next->next = storePreNodeNext;
	temp->next = storeTempNext2;
	return ;

}

void swapByValue(Node* &head, int pos) {
	Node* temp = head;
	int count = 1;
	while( count != pos) {
		temp = temp->next;
		count++;
	}
	int store = temp->data;
	temp->data = temp->next->data;
	temp->next->data = store;
	return ;

}

void insertAtHead(Node* &head, int val) {
	Node* newNode = new Node(val);

	if( head == NULL ) {
		head = newNode;
		return ;
	}

	newNode->next = head;
	head = newNode;
	return;
}

void insertAtTail(Node* &head, int val) { 
	Node* newNode = new Node(val);
	if( head == NULL ) {
		insertAtHead(head, val); // stub function 
		return ;
	}
	Node* temp = head;
	while( temp->next != NULL ) {
		temp = temp->next;
	}
	temp->next = newNode;
	return ;
}

void displayLinkedList(Node* root) {
	Node* temp = root;
	while( temp!= NULL ) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
	return ;
}

int main() {

	Node* head = NULL;
	int arr[] ={1, 2, 3, 4, 5, 6, 7, 8};
	for( int i=0; i<8; i++ ) {
		insertAtTail(head, arr[i]);
	}

	displayLinkedList(head);

	swapByValue(head, 5);

	displayLinkedList(head);

	swapByNode(head, 5);

	displayLinkedList(head);

	return 0;
}