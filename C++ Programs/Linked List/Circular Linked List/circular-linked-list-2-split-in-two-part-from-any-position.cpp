#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void splitLinkedList(node* &head1, node* &head2, node* &head3, int k){
    node* temp1 = head1;
   
    int count = 1;
    while( count !=k){
        temp1 = temp1->next;
        count++;

    }
     node* temp2 =temp1->next;
    head2 = head1;
    temp1->next = head1;
    head3 = temp2;
    while(temp2->next!=head1){
        temp2 = temp2->next;
    }
    temp2->next = head3;

    return ;
}

void insertAtHead(node* &head, int val){
    node* newNode = new node();
    newNode -> data = val;
    if( head == NULL){
        newNode->next = newNode;
        head = newNode ;
        return ;
    }

    node* temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next !=head);

    newNode->next = head;
    temp->next = newNode ;
    head = newNode ;
    return ;
    
}

void insertAtTail(node* &head, int val){
    node* newNode = new node();
    newNode->data = val;
    if( head == NULL){
        insertAtHead(head, val);
        return ;
    }

    node* temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next!=head);

    temp->next = newNode;
    newNode->next = head;
    return;
    
}

void printList(node* &head){
    node* temp = head ;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl;
    return;
    
}

int main(){

    node* head1 = NULL;
    node* head2 = NULL;
    node* head3 = NULL;

    int arr[11] = {9,5,1,6,2,3,8,7,4,10,23};
    for( int i=0;i<11;i++){
        insertAtTail(head1, arr[i]);
    }
    insertAtHead(head1, 123);
    printList(head1);
    splitLinkedList(head1, head2, head3, 4);
    printList(head2);
    printList(head3);
    
    return 0;
}