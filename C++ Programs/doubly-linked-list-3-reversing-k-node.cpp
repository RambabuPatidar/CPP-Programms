#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next ;
    node* prev;  
};

void push(node* &head  , int val ){
    node* newNode = new node();
    newNode->data = val ;
    newNode->next = head ;
    newNode->prev = NULL;
    if(head!= NULL){
        head->prev = newNode ;
    }
    head = newNode;
    return ;

}

node* reverseKNode( node* &head , int k){
    node * prePtr= NULL;
    node* currPtr = head ;
    node* next;
    int count = 1;
    while(currPtr!= NULL && count<= k){
        next  = currPtr->next;
        currPtr->next = prePtr;
        currPtr->prev = currPtr->next;
        prePtr = currPtr;
        currPtr = next;
        count++;
    }
    if( next!=NULL){
        head->next = reverseKNode(next ,k);
    }

    return prePtr;
}

void printList ( node* &head){
    node* temp = head ;
    cout<<"NULL<->";
    while(temp !=NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
    node*  head = NULL;
    push(head ,8 );
    push(head , 7);
    push(head , 6);
    push(head , 5);
    push(head , 4);
    push(head , 3);
    push(head , 2);
    push(head , 1);

    printList(head);

   node* newHead =  reverseKNode( head, 2);
   printList(newHead);
   

    
    return 0;
}