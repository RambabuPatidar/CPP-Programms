#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;
};


void removeDuplicateUnsorted(node* &head){
    node* temp = head;
    
    node* dup ;
   while(temp!=NULL && temp->next!= NULL){
       node* currPtr = temp;
       while(currPtr->next != NULL){
           
           if( temp->data == currPtr->next->data){
               dup = currPtr->next;
               currPtr->next = currPtr->next->next;
               delete dup;
           }
           else{
              
               currPtr = currPtr->next;
           }
       }
       temp = temp->next;
   }
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

    removeDuplicateUnsorted(head);
    printList(head);

   
   
    return 0;
}