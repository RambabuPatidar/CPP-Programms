#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

};

void printReverse(node* &head ){
    if( head==NULL || head->next== NULL){
        cout<<head->data<<"->";
        return;
    }
    printReverse(head->next);
    cout<<head->data<<"->";
    
}

node* reverseRecursive(node* &head ){
   if ( head == NULL || head->next == NULL){
       return head;
   }
   node* rest = reverseRecursive(head->next);
   head->next->next = head;
   head->next = NULL;

   return rest;
    
}

node* reverse(node* &head){
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr = NULL;
   

    while(currPtr!= NULL){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;

    }
    return prevPtr;
}

void push(node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    
    return;
}

void printList( node* &head ){
    node* temp= head ;
    while( temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
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
    cout<<"actual one:"<<endl;
    printList(head);
    cout<<endl;

     cout<<"reversing iteratively:"<<endl;
    node* newHead = reverse(head );
    printList(newHead);
        cout<<endl;


     cout<<"reverse Recursively:"<<endl;
    node* newHead1 = reverseRecursive(newHead);
    printList(newHead1);
        cout<<endl;

    
     cout<<"printing reverse:"<<endl;
    printReverse(newHead1);
    cout<<"NULL"<<endl;

    
    return 0;
}