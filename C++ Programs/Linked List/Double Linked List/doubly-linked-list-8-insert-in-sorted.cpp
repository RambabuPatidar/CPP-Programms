#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next ;
    node* prev;

};

void insertAtHead(node* &head , int key){
    node* newNode = new node();
    newNode->data = key ;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
}

void insertInSorted(node* &head  , int key){
    node* temp = head;
    node* preNode = NULL;

    if( key < head->data){
        insertAtHead(head , key);
        return;
    }
    while(temp->data < key){
        preNode = temp;
        temp = temp->next;
    }

    node* newNode = new node();
    newNode->data = key;
    newNode->next = preNode->next;
    newNode->prev = temp->prev;
    preNode->next = newNode;
    temp->prev = newNode;
}

void push(node* &head ,int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!= NULL){
        head->prev = newNode ;

    }
    head = newNode;
    return ;
}

void printList(node* &head){
    node* temp = head;
    cout<<"NULL<->";
    while(temp!= NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}

int main(){
    node* head = NULL;
    push(head, 6);
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
    push(head,0);

    printList(head);

    insertInSorted(head , -1);
    insertInSorted(head , 5);

    printList(head );
    
    return 0;
}