#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* reverseKnode(node* &head, int k){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;

    int count = 0;
    while( currPtr!= NULL && count < k){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }

     if(nextPtr!=NULL){
         head->next = reverseKnode(nextPtr ,k);
    }
    
    return prevPtr;

}

void push(node* &head , int n){
    node* newNode = new node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void printList(node* head){
    while( head!=NULL){
        cout<<head->data<<"->";
       head= head->next;

    }
    cout<<"NULL"<<endl;
    return;

}
int main(){

    node* head = NULL;
    push(head,6);
    push(head,5);
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
   
   printList(head);

    int k= 2;
    node* newHead = reverseKnode(head , k);
    printList(newHead);

    
    return 0;
}