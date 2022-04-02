#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;
};

void moveLastToFirst(node* &head){
    node* lastNode ;
    node* preNode ;
    node* temp = head;
    while(temp->next!= NULL){
        preNode = temp;
        temp= temp->next;
    }
    lastNode = temp;
    preNode->next = NULL;
    lastNode->next = head;
    head = lastNode;
}

void push( node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return;
}

void printList( node* &head){
    node*  temp  = head;
    while( temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
    node* head = NULL;
    push(head,9);
    push(head,3);
    push( head , 2);
    push(head,9);
    push(head, 1);
    push(head,1);
    push(head ,3);
    push(head, 2);
    push(head,2);
    push(head, 8);
    push(head ,1);
    push( head ,4);
    push( head , 8);
    printList(head);

    moveLastToFirst(head);
    printList(head);

   
   
    return 0;
}