#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;

    }
};

Node* insertAtHead(Node* head , int val) {
    // check if the list is empty at first

    if(head == NULL){
        return new Node(val);
    }

    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
    return head;
}

Node* insertAtEnd(Node* head, int val) {
    
    if(head == NULL) {
        // use the built function above;
        return insertAtEnd(head, val);
    } else{
        Node* tempNode = head;
        while(tempNode->next != NULL) {
            tempNode = tempNode->next ;
        }

        tempNode->next = new Node(val);
    }

    return head;
     
}

Node* insertInBetween(Node* head, int val, int k) {
    if(head == NULL) {
        cout << "Warning: List already empty" << endl;
        return insertAtHead(head, val);
    }

    Node* tempNode = head;
    int count = 1;
    while (count != k && tempNode!= NULL) {
        tempNode = tempNode->next;
        count++;
    }

    Node* newNode = new Node(val);
    newNode->next = tempNode->next;
    tempNode->next = newNode;

    return head;
}

int searchNode(Node* head , int value) {
    if(head == NULL) {
        cout << "Nothing to search" << endl;
        return -1;

    }  
    int count = 1;

    Node* temp = head;
    while(temp != NULL && temp->data != value) {
        temp = temp->next;
        count++;
    }

    if(temp == NULL ) {
        cout << " Not found " << endl;
        return -1;
    }

    return count;
}

Node* reverseList(Node* head) {
    Node* prevNode = NULL;
    Node* nextNode = head->next;

    while(head->next != NULL) {
        nextNode = head->next;
        head->next = prevNode;
        prevNode  = head;
        head = nextNode;

    }
    head->next = prevNode;
    return head;
}

Node* reverseListRecursive(Node* head, Node* prevNode, Node* nextNode) {
    if( head->next == NULL ) {
        head->next = prevNode;
        return head;
    }
    nextNode = head->next;
    head->next = prevNode;
    
    return reverseListRecursive(nextNode, head, nextNode);
}

Node* reverseList2(Node* head){
    if(head->next == NULL) {
        return head;
    }
    
    

}

void printList(Node* head) {

    Node* tempNode= head;
    while(tempNode != NULL) {
        cout << tempNode->data << "->";
        tempNode= tempNode->next;

    }

    cout << "NULL" << endl;
}


int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next  = new Node(4);

    head = insertAtHead(head, 123);
    head = insertAtEnd(head, 321);
    head = insertInBetween(head, 111,5);
    // head = deleteNode(head, 2);
    // cout << searchNode(head,111)<< endl;
    head = reverseListRecursive(head, NULL, head->next);
    printList(head);


    return 0;
}