#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;

};

void splitLinkedList(node* &head , node* &head1, node* &head2){
    node* tortoise = head;
    node* rabbit = head;
    while(rabbit->next!=NULL && rabbit->next->next!=NULL){
        tortoise = tortoise->next;
        rabbit = rabbit->next->next;
    }
    head2  = tortoise->next;
    tortoise->next =NULL;
    head1 =  head;
}

void push( node* &head ,int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return;
}
void printList(node* &head ){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){

    node* head=NULL;

    node* head1 =NULL;
    node* head2= NULL;
    // push(head, 8);
    push(head, 7);
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head,3);
    push(head,2);
    push(head, 1);

    printList(head);
    splitLinkedList(head, head1, head2);
    printList(head1);
    printList(head2);

    
    return 0;
}