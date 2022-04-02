#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

void splitLinkedList(node* &head, node* &head1,node* &head2){
    node* slow = head;
    node* fast = head;
    
    while(fast->next!=head && fast->next->next!=head){
        fast   = fast->next->next;
        slow  = slow->next;
    }
    head1  = head;
    head2 = slow->next;
    slow->next = head;
    if(fast->next==head){
        fast->next = head2;
    }
    else{
        fast->next->next = head2;
    }



}

void insertAtHead(node* &head , int val){
    node* newNode  = new node();
    newNode->data = val;

    if( head == NULL){
        newNode->next = newNode;
        head = newNode;
        return;
    }

    node* temp =head;
    while(temp->next !=head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
    return;
}

void insertAtTail(node* &head, int val){
    node* newNode  = new node();
    newNode->data = val;

    if(head ==NULL){
        insertAtHead(head, val);
        return;
    }
    // newNode->next = NULL;

    node* temp = head;
    while(temp->next !=head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next  = head;
    

}

void printList(node* &head){
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
    node* head1 =NULL;
    node* head2 =NULL;

    int arr[9]={1,2,3,4,5,6,7,8,9};
    for( int i=0;i<9;i++){
        insertAtTail(head, arr[i]);
    }
    insertAtHead(head,0);
    printList(head);
    splitLinkedList(head, head1, head2);
    printList(head1);
    printList(head2);

    
    return 0;
}