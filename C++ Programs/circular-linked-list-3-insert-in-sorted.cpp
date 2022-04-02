#include<iostream>
using namespace std;

class node {
    public:
    int data; 
    node* next;

};

void insertAtHead(node* &head, int val){
    node* newNode = new node();
    newNode->data = val;
    if(head ==NULL){
        newNode->next = newNode;
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
    return;

}

void insertInSorted(node* &head, int k){

    node* newNode = new node();
    newNode->data = k;

    node* temp = head;
    node* preNode = NULL;

    if(temp->data>k){
        insertAtHead(head , k);
        return;
    }
    while( temp->data <k && temp->next!=head){
        preNode = temp;
        temp = temp->next;
    }
    if( temp->next==head){
        newNode->next = head;
        temp->next = newNode;
    }
    else{
        newNode->next=  preNode->next;
        preNode->next = newNode;
    }
    
    return;

}



void insertAtTail(node*& head , int val){
    node* newNode = new node();
    newNode->data= val;

    if( head == NULL){
        insertAtHead(head , val);
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp ->next = newNode;
    newNode->next = head;
    return;
}

void printList(node*& head){
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl;
    return;
    
}


int main(){

    node* head =NULL;
    int arr[8]={1,2,3,4,5,7,8,9};
    for( int i=0;i<8;i++){
        insertAtTail(head, arr[i]);
    }
    printList(head);
    
    insertInSorted(head, 0);
    printList(head);
    return 0;
}