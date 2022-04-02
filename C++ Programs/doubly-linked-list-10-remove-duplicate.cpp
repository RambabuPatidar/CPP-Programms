#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};

void deletion(node* &deleteNode ){
    node* todelete = deleteNode;
    todelete->prev->next = todelete->next ;
    if(todelete->next!=NULL){
      todelete->next->prev = todelete->prev;

    }
    delete todelete;
    return;
}

void removeDuplicate(node* &head ){
    node* temp = head;
    while( temp->next != NULL){
        if( temp->data  == temp->next->data){
            deletion(temp->next);
           
        }
        else{
            temp = temp->next;
        }
    }
}

void push ( node* &head , int val ){
    node* newNode = new node();
    newNode->data  = val;
    newNode->next = head ;
    newNode->prev = NULL;
    if( head != NULL){
        head->prev = newNode;
    }
    head = newNode;
}
 
void printList (node* &head ){
    node* temp  = head ;
    cout<<"NULL<->";
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}
int main(){

    node* head =NULL;
    push( head , 9);
    push( head , 9);
    push( head , 9);
    push(head , 8);
    push(head , 8);
    push(head , 7);
    push(head ,6);
    push(head ,6);
    push(head ,5);
    push(head ,5);
    push(head ,4);
    push(head ,4);
    push(head ,3);
    push(head ,3);
    push(head ,3);
    push(head ,2);
    push(head ,2);
    push(head ,2);
    push(head ,1);
    push(head ,1);
    push(head ,1);

    printList(head );

    removeDuplicate(head);
    printList(head);
    
    return 0;
}