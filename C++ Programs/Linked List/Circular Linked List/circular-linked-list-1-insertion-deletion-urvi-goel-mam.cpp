// circular linked list and its insertion deletion
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

};

void deleteAtHead(node*& head){
    node* temp = head;
    while( temp->next!=head){
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = todelete->next;
    head = todelete->next;
    delete todelete;
    return;
}

void deletion(node* &head , int pos){

    if( pos == 1){
        deleteAtHead(head);
        return ;
    }
    node* temp = head;
    int count = 1;
    while(count!=pos-1){
        temp = temp->next;
        count++;
    }

    node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
    return;

}
void insertAtHead(node* &head , int val){
    node* newNode = new node();
    newNode->data = val ;
    if(head == NULL){
        newNode->next = newNode ;
        head  = newNode;
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;

    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;

}

void insertAtTail(node* &head , int val){
    node* newNode= new node();
    newNode->data = val;
    newNode->next = NULL;

    if( head  == NULL){
        insertAtHead(head , val);
        return;
    }
    node* temp = head;
    while( temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next  = head;
    return;

}

void printList(node* &head){
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    } while (temp!=head);
    cout<<endl;
}
int main(){ 

    node* head =NULL; 
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail ( head , 4);
    insertAtHead(head , 0);
    printList(head);
    deletion(head,5);
    printList(head);
    deleteAtHead(head);
    printList(head);

    return 0;
}