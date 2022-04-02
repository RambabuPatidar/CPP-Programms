#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

// this only work when the element in the linked list is different


void reverse(node* &head3){
    node* prePtr = NULL;
    node* currPtr = head3;
    node* nextPtr ;
    while( currPtr!= NULL){
        nextPtr = currPtr->next;
        currPtr->next = prePtr;

        prePtr = currPtr;
        currPtr = nextPtr;
    }
    head3 = prePtr;
}

void push( node* &head , int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return;
}

void intersection(node* &head1 , node* &head2, node* &head3){
    node* temp1 = head1;
    while( temp1 != NULL){
            node* temp2 = head2;

        while( temp2 !=NULL){
            if( temp1->data == temp2->data){
                push(head3 , temp1->data);
               
            }
             temp2 = temp2->next;
            
        }
        temp1 = temp1->next;
    }

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
    node* head1 = NULL;
    push(head1,9);
    push(head1,3);
    push( head1 , 2);
    push(head1,7);
    push(head1, 1);
    push(head1,4);
    push(head1 ,6);
    push(head1, 8);
    push(head1,5);
    push(head1, 10);
    push(head1 ,11);
    push( head1 ,12);
    push( head1 , 13);
    printList(head1);

    node* head2= NULL;
    push(head2 ,9);
    push(head2 ,8);
    push(head2 ,7);
    push(head2 ,6);
    push(head2 ,5);
    push(head2 ,4);
    push(head2 ,3);
    push(head2 ,2);
    push(head2 ,1);
    push(head2 ,13);
    
    printList(head2);
    node* head3 =NULL;
    intersection(head1 , head2 , head3);
    // printList(head3);
    reverse(head3);
    printList(head3);
   
   
    return 0;
}