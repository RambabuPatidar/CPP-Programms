#include<iostream>
using namespace std;

class node{
    public:
    int data; 
    node* next;
    node* prev;
};
void reverseDoubly(node*&head){
    node* ptr0 = NULL;
    node* ptr1 = head;
    node* next;
    while( ptr1!=NULL){
        next = ptr1->next;
        ptr1->next = ptr0;
        ptr1->prev = ptr1->next;
        ptr0 = ptr1;
        ptr1 = next;

    }
    head = ptr0;

}

void push( node* &head, int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!= NULL){
        head->prev  = newNode;
    }
    head = newNode;
}

void printList(node* &head ){
    node* temp = head;
    cout<<"NULL<-> ";
    while( temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}


int main(){
    node* head = NULL;
    push(head , 6);
    push ( head ,5);
    push(head , 4);
    push (head , 3);
    push (head, 2);
    push( head , 1);
    printList(head);

    reverseDoubly(head);
    printList(head);
    

    return 0;
}