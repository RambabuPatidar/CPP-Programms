#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void insertAtEnd(node** ref_node , int n){
    node* newNode =NULL;
    newNode = new node();
    newNode->data = n;
    newNode->next = NULL;
    node* temp = *ref_node;

    if( *ref_node == NULL){
        *ref_node = newNode;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

void insertAtHead(node** ref_node, int n){
    node* newNode = NULL;
    newNode = new node();
    newNode->data = n;
    newNode->next = *ref_node;
   *ref_node = newNode;
}

void insertInBetween(node * preNode,int n){
    if( preNode == NULL){
        cout<<"cann't insert at this position.";
    }
    node* newNode = NULL;
    newNode = new node();
    newNode->data = n;
    newNode->next =preNode->next;
    preNode->next = newNode;
}

void printList(node* head){
    node* temp = head;
    while( temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head =NULL;
    head= new node();
    head->data = 98;
    insertAtEnd(&head , 123);
    printList(head);
    insertAtHead(&head, 321);
    printList(head);
    insertInBetween(head->next , 456);
    printList(head);
    
    return 0;
}