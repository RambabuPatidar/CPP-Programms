#include<iostream>
using namespace std;
class node{
    public:
    int data; 
    node* next;
};

void evenAfterOdd(node* &head){
    node* odd  = head;
    node* even = head->next;
    node* evenStart = even;

    while(odd->next !=NULL && even->next != NULL){
        odd->next = even->next ;
        odd = odd->next;
        even->next = odd->next;
        if(even->next!=NULL){
        even = even->next;

        }

    }

    odd->next = evenStart ;
    if(even->next!=NULL){
        even->next =NULL;
    }
    return;
}

void push(node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return;
}

void printList(node* &head ){
    node* temp = head;
    while( temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){

    node* head =NULL;
    push(head, 7);
    push(head , 6);
    push(head, 5);
    push(head , 4);
    push(head,3);
    push(head,2);
    push(head,1);
    printList(head);

    evenAfterOdd(head);
    printList(head);

    
    return 0;
}